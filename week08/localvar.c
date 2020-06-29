#include <stdio.h>

void sub(int param);

int main(void)
{
    auto int n = 10; //auto는 일반적으로 생략하고 씀
    printf("%d\n", n);

    for (int m = 0, sum = 0; m < 3; m++)
    {
        sum += m;
        printf("\t%d %d\n", m, sum);
    }

    printf("%d\n", n);
    //for문 블럭 이후 sum, m은 참조 불가능

    sub(20);

    return 0;
}

void sub(int param)
{
    auto int local = 100;
    printf("\t%d %d\n", param, local);
}