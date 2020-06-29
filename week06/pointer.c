#include <stdio.h>

int main(void)
{
    int data = 100;
    int *ptrint;
    ptrint = &data; //포인터는 주소값을 가리킴

    printf("  data   %p    %8d\n", &data, data);
    printf("ptrint   %p    %p\n", &ptrint, ptrint);

    return 0;
}