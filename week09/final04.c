#include <stdio.h>

int main(void)
{
    int arr[10] = {10, 20, 30, 40, 50};
    int *p = &arr[2];
    p++;
    printf("%d\n", *p);
    p = p - 2;
    printf("%d\n", *p);
    (*p)++;
    printf("%d\n", *p);
    p--;
    printf("%d\n", *p);
    *p = *(p++);
    printf("%d\n", *p);

    return 0;
}