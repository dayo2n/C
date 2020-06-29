#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char name[20], dept[30]; //포인터 사용시 오류 : 초기화를 못해서인가?

    printf("%s", "학과 입력 >> ");
    scanf("%s", dept);
    printf("%s", "이름 입력 >> ");
    scanf("%s", name);
    printf("출력 : %10s %10s\n", dept, name);
    //scanf는 배열로 입력받아야함
    //버퍼로 한번에 받으려면 gets()사용

    return 0;
}