#include <stdio.h>

int main(void)
{ //포인터와 변수의 자료형은 같다
    char c = '0';
    char *pc = &c;
    int m = 100;
    int *pm = &m;
    double x = 5.83;
    double *px = &x;

    printf("변수명      주소명      저장값\n");
    printf("%3s %15p %9c\n", "c", pc, c); //&c == pc
    printf("%3s %15p %9d\n", "m", pm, m);
    printf("%3s %15p %9f\n", "x", px, x);
    //%뒤에 나오는 숫자는 자리확보를  위함
    return 0;
}