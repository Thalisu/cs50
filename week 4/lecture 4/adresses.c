#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_int_address(int n);
void print_str(char *str);

int main(void)
{
    /*     print_int_address(50);
        print_str("hello"); */

    /*     char *s = "hello";
        char *t = malloc(strlen(s) + 1);
        strcpy(t, s);
        print_str(t);

        free(t); */

    int *x = malloc(3 * sizeof(int));
    x[0] = 72;
    x[1] = 73;
    x[2] = 74;
    printf("%i\n", x[1]);
    free(x);
    return 0;
}

void print_int_address(int n)
{
    printf("%p\n", &n);
}

void print_str(char *str)
{
    printf("%s\n", str);
}