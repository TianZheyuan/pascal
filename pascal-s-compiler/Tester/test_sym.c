#include <stdio.h>
#include "../symtable.h"

void tester(STATUS status)
{
    printf("%d\n", status);
}

int main()
{
    symbol_type st1[] = {FLOAT,FLOAT,FLOAT,INT};
    symbol_type st2[] = {FLOAT,INT,FLOAT};
    symbol_type st3[] = {FLOAT,FLOAT,FLOAT};
    symbol_type st4[] = {FLOAT, FLOAT};

    tester(locate_table());
    tester(add_variable("tisd", FLOAT));
    tester(add_variable("t", CHAR));
    tester(get_type("t"));
    tester(get_type("tisd"));
    tester(add_function("foo", INT, 2));
    tester(locate_table());
    tester(add_parameter("foo", "a", FLOAT));
    tester(add_parameter("foo", "t", FLOAT));
    tester(get_type("t"));
    tester(relocate_table());
    tester(get_type("t"));
    return 0;
}