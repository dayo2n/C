#include <stdio.h>

#define PI 3.14
#define PRT printf("매크로 상수 예제 종료\n");
#define SQUARE(x) ((x) * (x))
#define CUBE(x) (SQUARE(x) * (x))
#define MULT(x, y) ((x) * (y))

int main()
{
    puts("const num");
    const double RATE = 0.03;
    int deposit = 800000;

    printf("interest rate : %f\n", RATE);
    printf("account change : %d\n", deposit);
    printf("interest : %f\n\n", deposit + RATE);

    puts("macro num");
    double r = 7.58;

    printf("%.2f의 제곱 : %.2f\n", 4.32, SQUARE(4.32));

    puts("enum num");
    enum Pl
    {
        c = 1972,
        cpp = 1983,
        java = 1995,
        csharp = 2000
    };
    printf("java: %d, cpp : %d, csharp : %d", java, cpp, csharp);

    return 0;
}