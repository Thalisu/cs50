# Data Structures

## Linked lists

`Data structure where each node contains data and a pointer to the next node`

## Singly-Linked Lists

    typedef struct node
    {
        int number;
        struct node *next;
    } node;

## Doubly-Linked Lists

    typedef struct node
    {
        int number;
        struct node *prev;
        struct node *next;
    } node;

## Hash table

`maps keys to values using a hash function`

    example hash function:
    int hash(char *word)
    {
        return toupper(word[0]) - 'A';
    }

one of the most universally compelling data structure to use

## trie

`a trie is a tree of arrays that uses multiples hash functions been in every situation big O(1) with the only downside been space`
