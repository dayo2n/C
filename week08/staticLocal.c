#include <stdio.h>

void increment(void);

int main(void)
{
    for (int count = 0; count < 3; count++)
        increment();
}

void increment(void)
{
    static int sindex = 1;
    auto int aindex = 1;

    printf("정적 지역변수 sindex : %2d, \t", sindex++);
    //연산된 값이 계속 기억되어 aindex와 달리 +1 연산이 가능
    printf("자동 지역변수 aindex : %2d\n", aindex++);
}

//정적 전역변수는 extern에 의해 다른 파일에서 참조 불가능 : 파일 내부에서만
//정적 변수는 부작용이 크므로 사용을 자제