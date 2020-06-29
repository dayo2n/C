#include <stdio.h>

char giveScore(int);

int main(void)
{

    int score;
    printf("성적을 입력하세요 : ");
    scanf(" %d", &score);

    printf("%c", giveScore(score));

    return 0;
}

char giveScore(int score)
{
    char grade;

    switch (score / 10)
    {

    case 10:
    case 9:
        grade = 'A';
        break;

    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;

    default:
        grade = 'F';
        break;
    }

    return grade;
}