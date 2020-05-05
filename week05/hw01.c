#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main(void)
{

    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);
    if (b == 0)
    {
        while (b == 0)
        {
            scanf("%d", &b);
        }
    }
    int result2 = sub(a, b);
    int result3 = multiply(a, b);
    int result4 = divide(a, b);

    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, result2);
    printf("%d * %d = %d\n", a, b, result3);
    printf("%d / %d = %d\n", a, b, result4);

    return 0;
}

int add(int a, int b)
{
    int result1;
    result1 = a + b;
    return result1;
}

int sub(int a, int b)
{
    int result2;
    result2 = a - b;
    return result2;
}

int multiply(int a, int b)
{
    int result3;

    if (a == 0)
    {
        result3 = 0;
    }
    else
    {
        result3 = a * b;
    }

    return result3;
}

int divide(int a, int b)
{
    int result4;

    if (a == 0)
    {
        result4 = 0;
    }
    else
    {
        result4 = a / b;
    }

    return result4;
}