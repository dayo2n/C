#include <stdio.h>

int main()
{
    char str[20] = "ZZYYYABABCDETWADEZ";

    char alpha[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int num[26] = {0};

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (alpha[i] == str[j])
                num[i]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (num[i] != 0)
            printf("%c%d", alpha[i], num[i]);
    }

    return 0;
}