#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct personscore
{
    int number;
    char name[40];
    int mid;
    int final;
    int quiz;
};

typedef struct personscore pscore;

int main()
{
    char fname[] = "score.bin";
    FILE *f;

    if ((f = fopen(fname, "wb")) == NULL)
    {
        printf("cannot open this file\n");
        exit(1);
    };

    char line[90];
    int cnt = 0;
    pscore score;
    printf("이름, 성적(중간, 기말, 퀴즈) 입력\n");

    fgets(line, 90, stdin);
    while (!feof(stdin))
    {
        sscanf(line, "%s %d %d %d", score.name, &score.mid, &score.final, &score.quiz);
        score.number = ++cnt;
        fwrite(&score, sizeof(pscore), 1, f);
        fgets(line, 90, stdin);
    }
    fclose(f);

    return 0;
}