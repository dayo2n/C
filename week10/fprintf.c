#define _CRT_SECURE_NO_WARININGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char fname[] = "grade.txt";
    FILE *f;

    char name[30];
    int point1, point2, cnt = 0;

    //쓰기모드 : 콘솔에서 입력받고 파일에 출력
    if ((f = fopen(fname, "w")) == NULL)
    {
        //if(fopen_s(&f, fname, "w")!=0)
        puts("cannot open this file");
        exit(1);
    }; ///세미 콜론 붙이기
        //입력받고 파일에 작성
    printf("이름과 성적(중간, 기말)을 입력");
    scanf("%s %d %d", name, &point1, &point2); //문자열일땐 주소연산자(&)안씀
    //scanf_s("%s%d%d", name, 30, &point1, &point2);
    //write on "grade.txt"
    fprintf(f, "%d %s %d %d\n", ++cnt, name, point1, point2);
    fclose(f);

    //읽기모드 : 텍스트 파일에서 읽고 콘솔창에 출력
    if ((f = fopen(fname, "r")) == NULL)
    //if(fopen_s(&f, fname, "r")!=0)
    {
        puts("cannot open this file");
        exit(1);
    };
    //write on "grade.txt"
    fscanf(f, "%d %s %d %d\n", &cnt, name, &point1, &point2);
    //fscanf_s(f, "%d %s %d %d\n", &cnt, name, 30, &point1, &point2);

    //write on 표준출력(콘솔창) : 기호상수 stdout
    fprintf(stdout, "\n%6s%16s%10s%8s\n", "number", "name", "mid", "final");
    fprintf(stdout, "%5d%18s%8d%8d\n", cnt, name, point1, point2);
    fclose(f);

    return 0;
}