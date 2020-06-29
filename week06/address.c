#include <stdio.h>

int main(void)
{

    int input;

    printf("함수 입력 : ");
    scanf("%d", &input);
    printf("입력값: %d\n", input);
    printf("주소값 : %u(10진수), %p(16진수)\n", (int)&input, &input);
    printf("주소값 : %d(10진수), %#X(16진수)\n", (unsigned)&input, (int)&input);

    printf("주소값의 크기 : %d\n", (int)sizeof(&input));

    return 0;
}