#include <stdio.h>

int main(void)
{
    int x = 126;
    printf("x => %08x\n", x);
    printf("x & 1 => %d, %08x\n", x & 1, x & 1);
    printf("x | 1 => %d, %08x\n", x | 1, x | 1);

    return 0;
}