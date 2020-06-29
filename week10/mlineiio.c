#include <stdio.h>
#include <stdlib.h>

//try again!!

int main(void)
{

    char fname[] = "grade.txt";
    FILE *f;

    char names[80];
    int cnt = 0;

    if ((f = fopen(fname, "w")) == NULL)
    {
        printf("cannot open this file\n");
        exit(1);
    };

    printf("이름과 성적(중간, 기말)입력\n");
    fgets(names, 80, stdin); //콘솔에 있는거 get

    //콘솔에 이름 중간 기말 입력하고 엔터
    //여러줄 입력하다가 종료하고싶을때 새 줄 첫 행에서 ctrl+Z
    while (!feof(stdin))
    {
        fprintf(f, "%d", ++cnt);
        fputs(names, f);
        fgets(names, 80, stdin);
    }
    fclose(f);

    return 0;
}