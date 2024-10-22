#include <stdio.h>
#include <stdlib.h>

int get_int(void);

int main(void)
{
    int n = get_int();
    printf("%i\n", n);
    return 0;
}

int get_int(void)
{
    int n;
    printf("Enter an integer: ");
    scanf("%i", &n);
    return n;
}