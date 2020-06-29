#include <stdio.h>
#include <string.h>

int main(void)
{

    char *s1 = "java";
    char *s2 = "java";

    printf("strcmp(%s, %s) = %d\n", s1, s2, strcmp(s1, s2));
    //같으면 0 반환 : 비교 기준은 아스키코드값

    s1 = "java";
    s2 = "jav";
    printf("strcmp(%s, %s)=%d\n", s1, s2, strcmp(s1, s2));
    //앞이 크면 양수 반환
    s1 = "ja";
    s2 = "javaaa";
    printf("strcmp(%s, %s)=%d\n", s1, s2, strcmp(s1, s2));
    //뒤가 크면 음수 반환
    printf("strcmp(%s, %s, %d)=%d\n", s1, s2, 2, strncmp(s1, s2, 2));
    //4번째짜리까지 비교

    return 0;
}