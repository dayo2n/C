#include <stdio.h>

int factorial(int);

int main(void)
{

    for (int i = 1; i < 10; i++)
    {

        printf("%d ! = %d\n", i, factorial(i));
    }

    return 0;
}

int factorial(int i)
{
    if (i == 1)
        return 1;

    return (i * factorial(i - 1));
}