#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char fname[] = "char.txt";
    FILE *f1, *f2;

    if ((f1 = fopen(fname, "w")) == NULL)
    {
        printf("cannot open this file");
        exit(1);
    };
    puts("문자를 입력하다가 종료시 x를 입력 >>");

    int ch;

    while (1)
    {
        scanf("%d", &ch);
        if (ch == 'x')
            break;
        fputc(ch, f1);
    }
    fclose(f1);
    puts("");

    if ((f2 = fopen(fname, "r")) == NULL)
    {
        printf("cannot open this file");
        exit(1);
    };

    while ((ch = fgetc(f2)) != EOF) //EOF = -1을 의미
        printf("%c", ch);
    fclose(f2);

    return 0;
}