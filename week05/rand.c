#include <stdio.h>
#include <stdlib.h>
#include <time.h> //for srand()

#define MAX 100

int main(void)
{

    srand((long)time(NULL));
    //시드값을 time함수를 이용해 매번 다르게 해주면 난수값도 달라짐
    //안쓰면 순서대로 같은 난수 호출
    printf("%1d ", rand() % MAX - 1); //1~MAX까지의 난수 출력

    puts("");

    return 0;
}