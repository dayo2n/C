#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d, %d\n", a, b);
    swap(&a, &b);
    printf("%d, %d", a, b);

    return 0;
}