/* Symbol Table Module Header */

/* 符号类型 */
typedef enum {TYPE_ERROR, INT, CHAR, FLOAT, BOOL, ARRAY, FUNCTION, STRING, PROCEDURE} symbol_type;

/* 自制的状态类型 */
#define STATUS int
#define SUCCESS 1
#define FAILED 0
#define HASH_SIZE 128
#define HASH_TYPE int
#define STACK_SIZE 512
#define BLOCK_SIZE 512
#define PARAMETER_SIZE 32

/* 函数参数结构体 */
typedef struct _parameter_info
{
    HASH_TYPE *hash_table;       // 参数的散列表
    struct _symbol *para_stack;  // 参数的栈式散列符号表
    unsigned int para_top;
} parameter_info;

/* 符号元素结构体 */
typedef struct _symbol
{
    const char*    name;           // 符号名
    symbol_type    type;           // 符号类型
    symbol_type    sub_type;       // 子类型
    unsigned int   dimension;      // 维数
    int            is_const;       // 是否常量
    int            is_reference;   // 是否引用
    parameter_info parameter_list; // 函数参数
    unsigned int   next;           // 链域
} symbol;

/* 符号表 */
symbol symbol_stack[STACK_SIZE];

/* 符号表的查找操作 */
extern unsigned int find_element(const char* name);

/* 符号表的添加操作 */
extern STATUS add_element(const char* name, symbol_type type, symbol_type sub_type, 
    unsigned int dimension, const int is_const, const int is_reference);
/* 函数参数元素在符号表的添加操作 */
extern STATUS add_parameter_element(const char* function_name, const char* name, symbol_type type, symbol_type sub_type,
    unsigned int dimension, const int is_const, const int is_reference);
/* 符号表的定位操作 */
extern STATUS locate_table(void);
/* 符号表的重定位操作 */
extern STATUS relocate_table(void);
/* 返回符号的类型信息 */
extern symbol_type get_type(const char* name);
/* 返回符号的返回值类型信息 */
extern symbol_type get_return_type(const char* name);
/* 返回函数声明的形参个数 */
extern unsigned int get_parameter_number(const char* name);
/* 判断一个符号是不是常量 */
extern int is_const(const char* name);
/* 判断一个符号是不是引用 */
extern int is_reference(const char* name);
/* 用于判断一个函数参数是不是引用 */
extern int is_reference_parameter(const char* function_name, const char* name);
/* 比较函数参数类型 */
extern STATUS check_parameter_types(const char* function_name, const int n, const symbol_type st[]);
/*用于判断变量是否定义*/
unsigned int IS_DEFINED(const char* name);

/* 函数别名 */
/* 添加（基本）变量 */
#define add_variable(name, type) \
    add_element(name, type, TYPE_ERROR, 0, 0, 0)
/* 添加常量 */
#define add_const(name, type) \
    add_element(name, type, TYPE_ERROR, 0, 1, 0)
/* 添加数组 */
#define add_array(name, element_type, dimension) \
    add_element(name, ARRAY, element_type, dimension, 0, 0)
/* 添加过程 */
#define add_procedure(name, parameter_number) \
    add_element(name, PROCEDURE, TYPE_ERROR, parameter_number, 0, 0)
/* 添加函数 */
#define add_function(name, return_type, parameter_number) \
    add_element(name, FUNCTION, return_type, parameter_number, 0, 0)
/* 添加函数参数 */
#define add_parameter(function_name, name, type) \
    add_parameter_element(function_name, name, type, TYPE_ERROR, 0, 0, 0)
/* 添加函数引用参数 */
#define add_reference_parameter(function_name, name, type) \
    add_parameter_element(function_name, name, type, TYPE_ERROR, 0, 0, 1)
