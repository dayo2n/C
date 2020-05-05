#include <stdio.h>

int main(void){
    
    int coin;

    scanf("%d", &coin);

    printf("500 : %d\n", coin/500);
    coin%=500;
    printf("100 : %d\n", coin/100);
    coin%=100;
    printf("50 : %d\n", coin/50);
    coin%=50;
    printf("10 : %d\n", coin/10);
    coin%=10;
    printf("5 : %d\n", coin/5);
    coin%=5;
    printf("1 : %d\n", coin/1);

    return 0;

}