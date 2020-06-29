#include <stdio.h>
#include <string.h>

int main()
{

    char s[] = "madam";
    char temp[strlen(s)];
    memcpy(temp, s, strlen(s) + 1);

    printf("%s", temp);

    return 0;
}