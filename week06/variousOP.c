#include <stdio.h>

int main(void)
{
    int i;
    int *pi = &i;
    int **dpi = &pi;

    *pi = 5;  //i=5
    *pi += 1; //i=6
    printf("%d\n", i);

    printf("%d\n", (*pi)++); //6으로 먼저 출력되고 이후에 연산되어 7이 됨
    //*pi++==*(pi++), *pi++!=(*pi)++
    printf("%d\n", *pi);

    *pi = 10;                //i=10
    printf("%d\n", ++*pi);   //++*pi == ++(*pi)
    printf("%d\n", ++**dpi); //++**dpi == ++(**dpi)
    printf("%d\n", i);

    return 0;
}