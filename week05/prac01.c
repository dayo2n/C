#include <stdio.h>

#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(void)
{
    long seconds = (long)time(NULL);
    srand(seconds);

    printf("0 ~ %5d 사이의 난수 5개 : rand()\n", MAX);

    for (int i = 0; i < 5; i++)
        printf("%5d ", rand() % MAX + 1);

    return 0;
}