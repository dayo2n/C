#include <stdio.h>
#include <string.h>

void reverse(char str[]);

int main(void)
{

    char str[50];
    scanf("%s", str);
    memcpy(str, str, strlen(str) + 1);

    reverse(str);
    puts(str);

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