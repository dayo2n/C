#include <stdio.h>
#define SIZE 3

int main(void)
{

    int *pary[SIZE] = {NULL};

    int a = 10, b = 20, c = 30;

    pary[0] = &a;
    pary[1] = &b;
    pary[2] = &c;

    for (int i = 0; i < SIZE; i++)
        printf("*pary[%d] = %d\n", i, *pary[i]);

    for (int i = 0; i < SIZE; i++)
    //scanf에서는 주소값으로 할당하기때문에 포인터없이 배열만 쓰면 됨!!*****************8
    {
        scanf("%d", pary[i]);
        printf("%d, %d, %d\n", a, b, c);
    }

    return 0;
}