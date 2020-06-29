#include <stdio.h>

double getArea(double);
double PI = 3.14;

int main(void)
{
    double r = 5.87;
    //local variable
    const double PI = 3.141592;
    //global variable

    printf("PI : %f\n", PI);
    printf("getArea() : %f", getArea(r));
    return 0;
}

double getArea(double r)
{
    return r * r * PI;
}