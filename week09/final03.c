#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    FILE *f1, *f2;

    if ((f1 = fopen("input.txt", "r")) == NULL)
    {
        printf("cannot open this file\n");
        exit(1);
    };

    if ((f2 = fopen("output.txt", "w")) == NULL)
    {
        printf("cannot open this file\n");
        exit(1);
    };

    char a;
    while ((a = getc(f1)) != EOF)
    {
        if (isupper(a))
            putc(a, f2);
    }
    fclose(f1);
    fclose(f2);

    return 0;
}