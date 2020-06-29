#include <stdio.h>
#include <string.h>

//이거 다시 보기!

void reverse(char[]);

int main(void)
{

    char str[50];

    printf("문자열 입력 : ");
    memcpy(str, "Programming", strlen("Programming") + 1);

    reverse(str);
    printf("%s\n", str);

    return 0;
}

void reverse(char str[])
{
    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
}