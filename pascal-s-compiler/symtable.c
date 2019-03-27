/* Symbol Table Module */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "symtable.h"

/* 散列表 */
HASH_TYPE hash_table[HASH_SIZE] = {0};

unsigned int ss_top = 0;

/* 块索引表 */
unsigned int table_of_block[BLOCK_SIZE] = {0};
unsigned int tob_top = 0;

/* 散列函数 */
int hash(const char* name)
{
    return (int)name[0];
}

/* 符号表的查找操作 */
unsigned int find_element(const char* name)
{
    unsigned int pos;
	int flag=0;
    for (pos = hash_table[hash(name)]; pos; pos = symbol_stack[pos].next)
        if(!strcmp(symbol_stack[pos].name, name))
		{
			break;
		}
    return pos;
}

unsigned int IS_DEFINED(const char* name)
{
	int pos;
	for(pos = hash_table[hash(name)]; pos; pos = symbol_stack[pos].next)
        if(!strcmp(symbol_stack[pos].name, name))
		{
			return 1;
		}
	return 0;
}

/* 元素在符号表的添加操作 */
STATUS add_element(const char* name, const symbol_type type, const symbol_type sub_type, 
    const unsigned int dimension, const int is_const, const int is_reference)
{
    HASH_TYPE hash_value = hash(name);
    symbol sym = {name, type, sub_type, dimension, is_const, is_reference,
        {NULL, NULL, 0}, hash_table[hash_value]};

    /* 检查本定义域内是否有重复 */
    if(find_element(name) >= table_of_block[tob_top]) // 在本定义域内
	{   printf("   %s\n",name);
	    printf("redefinition!!!!!!!!!!!\n");
		return FAILED;
	}


    /* 分配函数参数表的空间 */
    if(type == FUNCTION || type == PROCEDURE)
    {
        sym.parameter_list.hash_table = (HASH_TYPE*)malloc(HASH_SIZE*sizeof(HASH_TYPE));
        sym.parameter_list.para_stack = (symbol*)malloc(PARAMETER_SIZE*sizeof(symbol));

        /* 检查空间是否分配成功 */
        if(!sym.parameter_list.hash_table || !sym.parameter_list.para_stack)
        {
	        printf("space allocation failed!!!!!!!!\n");
			return FAILED;
		}
		
    }

    /* 存入符号表并更新散列表 */
    symbol_stack[++ss_top] = sym;
    hash_table[hash_value] = ss_top;
	
    //printf("success\n");
	
    return SUCCESS;
}

/* 函数参数元素在符号表的添加操作 */
STATUS add_parameter_element(const char* function_name, const char* name, symbol_type type, symbol_type sub_type,
    unsigned int dimension, const int is_const, const int is_reference)
{
    HASH_TYPE hash_value = hash(name);
    symbol sym = {name, type, sub_type, dimension, is_const, is_reference, 
        {NULL, NULL, 0}, 0};
    parameter_info *para = NULL;
    unsigned int pos;
    
    /* 检查函数是否存在 */
    if(!(pos=find_element(function_name)) || 
        (symbol_stack[pos].type!=FUNCTION && symbol_stack[pos].type!=PROCEDURE))
    {   
	    printf("function not exist!!!!!!!\n");
		return FAILED;
	}
    
    para = &symbol_stack[pos].parameter_list;
    
    /* 检查提供的参数是否超过上限 */
    if(para->para_top >= symbol_stack[pos].dimension)
    {   
	    printf("parameter_number overflow\n");
		return FAILED;
	}

    /* 添加到符号表中 */
    if(add_element(name, type, sub_type, dimension, is_const, is_reference) == FAILED)
    {   
	    //printf("failed3  par\n");
		return FAILED;
	}

    /* 添加到函数参数列表中 */
    sym.next = para->hash_table[hash_value];
    para->para_stack[++para->para_top] = sym;
    para->hash_table[hash_value] = para->para_top;
	
	//printf("success  par\n");

    return SUCCESS;
}

/* 元素在符号表的删除操作 */
STATUS delete_element(const char* name)
{
    symbol sym = symbol_stack[hash_table[hash(name)]];

    /* 释放参数表的空间 */
    if(sym.parameter_list.hash_table)
        free(sym.parameter_list.hash_table);
    if(sym.parameter_list.para_stack)
        free(sym.parameter_list.para_stack);
    
    /* 调整栈 */
    hash_table[hash(name)] = sym.next;
    return SUCCESS;
}

/* 符号表的定位操作 */
STATUS locate_table(void)
{
	//printf("locate_table\n");
    table_of_block[++tob_top] = ss_top+1;
    return SUCCESS;
}

/* 符号表的重定位操作 */
STATUS relocate_table(void)
{
	//printf("relocate_table\n");
    int next_ss_top = table_of_block[tob_top--]-1;
    for(; ss_top>next_ss_top; ss_top--)
        delete_element(symbol_stack[ss_top].name);
    return SUCCESS;
}

/* 返回符号的类型信息 */
symbol_type get_type(const char* name)
{
    return symbol_stack[find_element(name)].type;
}

/* 返回符号的返回值类型信息 */
symbol_type get_return_type(const char* name)
{
    return symbol_stack[find_element(name)].sub_type;
}

/* 返回函数声明的形参个数 */
unsigned int get_parameter_number(const char* name)
{
    return symbol_stack[find_element(name)].dimension;
}

/* 判断一个符号是不是常量 */
int is_const(const char* name)
{
    return symbol_stack[find_element(name)].is_const;
}

/* 判断一个符号是不是引用 */
int is_reference(const char* name)
{
    return symbol_stack[find_element(name)].is_reference;
}

/* 判断一个函数参数是不是引用 */
int is_reference_parameter(const char* function_name, const char* name)
{
    unsigned int pos = find_element(function_name);
    const parameter_info* ppi;

    /* 判断函数是否存在 */
    if(!pos)
        return FAILED;
    
    ppi = &symbol_stack[pos].parameter_list;
    for(pos = ppi->hash_table[hash(name)]; pos; pos = ppi->para_stack[pos].next)
        if(!strcmp(ppi->para_stack[pos].name, name))
            return ppi->para_stack[pos].is_reference;
    
    return FAILED; /* 没有找到这个参数 */
}

/* 比对函数参数类型 */
STATUS check_parameter_types(const char* function_name, const int n, const symbol_type st[])
{
    unsigned int i, pos;
    parameter_info* ppi;

    pos = find_element(function_name);
    if(!pos)
	{	
			return FAILED; // 符号不存在
	}
    if(symbol_stack[pos].dimension!=n)
	{
		return FAILED; // 维数不匹配
	}
    ppi = &symbol_stack[pos].parameter_list;
    for(i = 1; i <= n; i++)
        if(ppi->para_stack[i].type!=st[i-1])
        {
            printf("%d %d", ppi->para_stack[i].type, st[i-1]);
            return FAILED;
        }

    return SUCCESS;
}
