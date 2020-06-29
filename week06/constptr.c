#include <stdio.h>

int main(void)
{
    int i = 10, j = 20;
    const int *p = &i; //i 가리켰다가
    //자료형 앞에 const가 붙으면 *p가 상수 취급, *p는 수정 불가능하고 p는 수정가능

    p = &j; //j의 포인터로 초기화
    printf("%d\n", *p);
    *p = 5;

    double d = 7.8, e = 2.7;
    double *const pd = &d;
    //변수명과 포인터 사이에 const가 붙으면 pd가 상수 취급, pd는 수정 불가능하고 *pd는 수정가능

    *pd = 4.4;
    printf("%f\n", *pd);

    pd = 2.2;

    return 0;
}