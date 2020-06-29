#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest[80] = "Java";
    char source[80] = "C is a Language";

    printf("%s\n", strcpy(dest, source));
    printf("%s\n", strncpy(dest, "C#", 2));
    //C#까지 두개의 문자 복사, 앞 두 문자가 대체
    printf("%s\n", strncpy(dest, "C#", 3));
    //C#\0까지 3개의 문자가 복사되므로 C#출력

    return 0;
}