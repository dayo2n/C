#include <stdio.h>
#include <string.h>

struct student
{
    int num;
    char name[30];
    char score;
};

int main(void)
{

    struct student mem[2] =
        {
            {201902688, "moon", 'B'}, {201902666, "dayeon", 'A'}};

    if (mem[0].num == mem[1].num && !(strcmp(mem[0].name, mem[1].name) && mem[0].score == mem[1].score))
    {
        printf("두 변수의 모든 멤버값은 동일합니다.\n");
    }

    struct student *p = mem;

    for (int i = 0; i < sizeof(mem) / sizeof(mem[0]); i++)
    {
        printf("%d%15s%5c\n", mem[i].num, mem[i].name, mem[i].score);
    }
    return 0;
}