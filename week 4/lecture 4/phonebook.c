#include <stdio.h>

int main(void)
{
    fopen("phonebook.csv", "a");
    fclose("phonebook.csv");
}