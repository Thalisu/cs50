#include <cs50.h>
#include <stdio.h>

int main(void) {
    string answer = get_string("Enter your name? ");
    printf("Hello, %s!\n", answer);
    return 0;
}