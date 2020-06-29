#include <stdio.h>

//함수 또는 블록에서 전역변수와 같은 이름으로 지역 변수 선언 가능 : 지역변수로 인식
//역은 불가능 : 사용하지않는 것이 좋음

double getArea(double);
double getCircum(double);

double PI = 3.14;
int gi;

int main(void)
{
    double r = 5.87;
    const double PI = 3.141592;
    int go;

    printf("area : %f\n", r * r * PI);  //지역변수 PI사용
    printf("area2 : %f\n", getArea(r)); //전역변수 PI사용
    printf("circum : %f\n", 2 * PI * r);
    printf("circum2 : %f\n", getCircum(r));
    printf("PI : %f\n", PI);
    printf("gi : %d\n", gi);
    printf("go : %d", go); //gi, go 초기값이 저장되지않았으나 자동 0 저장

    return 0;
}

double getArea(double r)
{
    return (r * r * PI);
}

double getCircum(double r)
{
    return (2 * PI * r);
}