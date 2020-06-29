#include <stdio.h>

int main(void)
{
    int data = 100;
    char ch = 'A';
    int *ptrint = &data;
    char *ptrchar = &ch;

    printf("간접참조 출력 : %d %c\n", *ptrint, *ptrchar);

    *ptrint = 200;  // *ptrint로 간접참조하여 data의 내용을 수정
    *ptrchar = 'B'; //포인터 변수는 r-value 와 l-value로 모두 사용가능
    printf("직접참조 출력 : %d %c\n", data, ch);
    printf("간접참조 출력 : %d %c\n", *ptrint, *ptrchar);

    return 0;
}