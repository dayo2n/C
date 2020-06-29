#include <stdio.h>

void func_by_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    int a = 10, b = 20;
    printf("a = % d, b = % d\n", a, b);

    func_by_value(a, b);
    printf("a = % d, b = % d", a, b);

    return 0;
}