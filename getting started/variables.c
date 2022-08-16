#include <stdlib.h>
#include <stdio.h>

int main()
{

    char single_char = 'A';
    char multiple_char[] = "string";
    int interger_var = 42;
    double decimal_var = 3.14;

    printf("single character string format ( %c )\n", single_char);
    printf("multiple character string format ( %s )\n", multiple_char);
    printf("interger format ( %d )\n", interger_var);
    printf("decimals format ( %f )\n", decimal_var);
    
    return 0;
}