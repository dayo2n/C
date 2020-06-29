#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[50] = "https://www.visualstudio.com";
    char dst[50];
    printf("문자 배열 src = %s\n", src);
    printf("문자열크기 strlen(src = %lu\n", strlen(src));
    //%lu는 length의 길이를 출력할때
    memcpy(dst, src, strlen(src) + 1);
    //src에서 dst에 strleng(src)+1개만큼 복사해서 문자열의 마지막 널이 되도록
    //마지막 널에 '\0'을 위한 +1인듯

    printf("문자배열 dst = %s\n", dst);
    memcpy(src, "안녕하세요!", strlen("안녕하세요!") + 1);
    printf("문자배열 src = %s\n", src);

    char ch = ":";
    char *ret;
    ret = memchr(dst, ch, strlen(dst));
    printf("문자 %c 뒤에는 문자열 %s 이 있다.\n", ch, ret);
    //dst에서 ":" 이후의 문자열을 반환하여 변수 ret에 저장

    return 0;
}