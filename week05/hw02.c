#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int loop(int input[], int n);
int recursive(int input[], int n, int data);

int main(void)
{

    int input[10];
    int n = sizeof(input) / sizeof(int);

    for (int i = 0; i < 10; i++)
    {
        scanf(" %d", &input[i]);
    }

    printf("loop : %d\n", loop(input, n));

    int data = 0;
    printf("recursive : %d", recursive(input, n, data));

    return 0;
}

int loop(int input[], int n)
{

    int biggest = input[0];
    for (int i = 1; i < n; i++)
    {
        if (input[i] > biggest)
        {
            biggest = input[i];
        }
    }

    return biggest;
}

int recursive(int input[], int n, int data)
{
    int biggest = data;

    if (n == 0)
    {
        return biggest;
    }

    if (input[n - 1] > biggest)
    {
        biggest = input[n - 1];
    }

    return recursive(input, n - 1, biggest);
}