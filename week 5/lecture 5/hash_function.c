#include <ctype.h>

int main(void)
{
    return 0;
}

int hash(char *word)
{
    return toupper(word[0]) - 'A';
}