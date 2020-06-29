#include <stdio.h>

#define DEBUG
#define LIMIT 10

int main()
{
    long prod = 1;
    for (int i = 1; i <= LIMIT; i++)
    {
        prod *= i;
#ifdef DEBUG
        if (i % 3 == 0)
            printf("DEBUG : 1부터 %d까지의 곱은 %ld\n", i, prod);
#endif
    }
    printf("1부터 %d의 곱은 %ld\n", LIMIT, prod);
    return 0;
}
//6 720 362880 362880