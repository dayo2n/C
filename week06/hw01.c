#include <stdio.h>

void getMinMax(int *pa, int *pb, int *max, int *min)
{

    printf("getminmax()\n");

    if (*pa > *pb)
    {
        *max = *pa;
        *min = *pb;
    }
    else
    {
        *max = *pb;
        *min = *pa;
    }
}

int main(void)
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);
    printf("a = %d, b = %d\n", a, b);

    int *pa = &a; //a의 값을 의미
    int *pb = &b;
    int max, min;

    getMinMax(&a, &b, &max, &min);

    printf("min = %d, max = %d", min, max);
}