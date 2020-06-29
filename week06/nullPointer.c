#include <stdio.h>

int main(void)
{
    int *ptr1, *ptr2, data = 10;
    ptr1 = NULL;

    printf("%p\n", ptr1);
    //   printf("%p\n", ptr2); //원래는 초기값 설정안해서 오류나는데 왜인지 안남..
    printf("%d\n", data);

    return 0;
}