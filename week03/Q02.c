#include <stdio.h>

int main(void){

    double num;

    scanf("%lf", &num);

    int intNum = num;

    printf("Integer : %d\n", intNum);
    printf("Float : %.4f", num-intNum);

    return 0;
}