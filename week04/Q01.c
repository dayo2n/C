#include <stdio.h>

int main(void){

    int money;
    int coins[5] = { 500, 100, 50, 10, 1};
    int numberOfCoin[5];

    printf("돈의 액수를 입력하세요 : ");
    scanf("%d", &money);

    for(int i=0; i<5; i++){
        numberOfCoin[i]=money/coins[i];
        money %= coins[i];
    }

    printf("돈을 지급한 방법은..\n");

    for(int i=0; i<5; i++){
        printf("%d원의 짜리는 %d개\n", coins[i], numberOfCoin[i]);
    }

    printf("로 지급되었습니다.");

    return 0;
}