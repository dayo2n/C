#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    FILE *f1, *f2;

    if ((f1 = fopen("convert.txt", "r")) == NULL)
    {
        printf("cannot open this file\n");
        exit(1);
    }
    if ((f2 = fopen("my_convert.txt", "w")) == NULL)
    {
        printf("cannot open this file\n");
        exit(1);
    }

    char a;

    while ((a = getc(f1)) != EOF)
    {
        if (isalpha(a))
        {
            if (islower(a))
                a = toupper(a);
            else if (isupper(a))
                a = tolower(a);
        }
        putc(a, f2);
    }
    fclose(f1);
    fclose(f2);
    printf("File my_convert.txt is created");

    return 0;
}