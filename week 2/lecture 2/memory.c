/* #include <cs50.h> */
#include <stdio.h>

float average(int length, int array[]);

int main(void)
{
    const int N = 3;
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    float avg = average(N, scores);
    printf("Average: %.2f\n", avg);
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float)length;
}