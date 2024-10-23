#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int preppend(int number, node **list);

int main(int argc, char *argv[])
{
    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);
        preppend(number, &list);
    }

    node *ptr = list;
    // big O(n) solution because the args is from back to front
    return 0;
}

int preppend(int number, node **list)
{
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }

    n->number = number;
    n->next = *list;
    *list = n;
}

int append(int number, node **list)
{
    // some big O(n) solution
}