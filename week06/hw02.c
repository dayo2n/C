#include <stdio.h>

void swap(int *a, int *b)
{

    puts("swap()");

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)

{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("a = %d, b = %d", a, b);
}