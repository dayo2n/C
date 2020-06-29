#include <stdio.h>
#include <limits.h> //정수 자료형의 최소값 최대값 매크로 포함
#include <float.h>  //실수 자료형의 최소값 최대값 매크로 포함

int main()
{

    char ch = 'A';
    char str[10] = "abc";

    puts("======정수 자료형======");
    puts("int ");
    printf("size of int : %lu byte\n", sizeof(int));
    printf("int 범위 : %d ~ %d \n", INT_MIN, INT_MAX);
    printf("int 표현 : %%d\n\n");

    puts("unsigned int ");
    printf("size of unsigned int : %lu byte\n", sizeof(unsigned int));
    printf("unsigned int 범위 : 0 ~ %u \n", UINT_MAX);
    printf("unsigned int 표현 : %%u\n\n");

    puts("======실수 자료형======");
    puts("float");
    printf("size of float : %lu byte\n", sizeof(float));
    printf("float 범위 : %f ~ %f \n", FLT_MIN, FLT_MAX);
    printf("float 표현 : %%f\n\n");

    puts("double");
    printf("size of float : %lu byte\n", sizeof(double));
    printf("double 범위 : %lf ~ %lf \n", DBL_MIN, DBL_MAX);
    printf("double 표현 : %%lf\n\n");

    puts("======문자 자료형======");
    puts("char");
    printf("size of char : %lu byte\n", sizeof(char));
    printf("char 범위 : %d ~ %d \n", CHAR_MIN, CHAR_MAX);
    printf("char 표현 : %%c\n\n");

    puts("unsigned char");
    printf("size of unsigned char : %lu byte\n", sizeof(unsigned char));
    printf("unsigned char 범위 : %d ~ %d \n", 0, UCHAR_MAX);
    printf("unsigned char 표현 : %%uc\n\n");

    printf("size of str : %lu byte\n", sizeof(char));
    printf("char 표현 : %%s\n\n");

    printf("char값 : %c = %d\n", ch, ch);
    printf("str값 : %s\n", str);

    return 0;
}