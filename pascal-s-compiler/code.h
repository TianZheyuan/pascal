#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define write_int(name) printf("%d",name)
#define write_char(name) printf("%c",name)
#define write_string(name)  printf("%s",name)
#define read_int(name) scanf("%d",&name)
#define read_char(name) scanf("%c",&name)
struct id_list
{
    char* name;
    int id_list_id;
    char* type;
    struct id_list *next;
    int var_flag;//确定是传值引用还是传地址引用
}id_list;
char* char_strcpy(char* a,char* b)
{
    char* c=(char*)malloc(30*sizeof(char));
    strcpy(c,a);
    strcat(c,b);
    return c;
}
void file_clean()//输出文件清空
{
    FILE* FP=fopen("print_file.cpp","w");
    fclose(FP);
}
char* code_get_type(char* a)
{
    if(strcmp(a,"integer")==0)
    {
        return (char*)"int";
    }
    if(strcmp(a,"char")==0)
    {
        return (char*)"char";
    }
    if(strcmp(a,"boolean")==0)
    {
        return (char*)"bool";
    }
    if(strcmp(a,"real")==0)
    {
        return (char*)"float";
    }
    if(strcmp(a,"string")==0)
    {
        return (char*)"string";
    }
}
void print(const char* a)
{
    FILE* FP=fopen("print_file.cpp","a");
   // printf("%s",a);
    fprintf(FP,"%s",a);
    fclose(FP);
}