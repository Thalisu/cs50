#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef char *string;
typedef enum
{
    false,
    true
} bool;

typedef struct node
{
    string phrase;
    struct node *next;
} node;

node *table[26];

int hash(string phrase);
bool unload(node *list);
void visualizer(node *list);

int main(void)
{
    // Add items
    for (int i = 0; i < 3; i++)
    {
        string phrase = "ebacate";

        // Find phrase bucket
        int bucket = hash(phrase);
        printf("%s hashes to: %i\n", phrase, bucket);
    }
}

int hash(string phrase)
{
    return toupper(phrase[0]) - 'A';
}