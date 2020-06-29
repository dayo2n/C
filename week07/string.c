#include <stdio.h>

int main(void)
{
    char c[] = "C C++ Java";
    printf("%s\n", c);
    c[5] = '\0';
    printf("%s\n%s\n", c, (c + 6)); //c+6 이면 c 문자열의 인덱스 6부터 출력

    c[5] = ' ';
    char *p = c;
    while (*p)
        printf("%c", *p++);
    printf("\n");

    return 0;
}