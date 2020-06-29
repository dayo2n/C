#include <stdio.h>
#include <stdlib.h> //for exit()

int main(void)
{
    char *fname = "basic.txt";
    FILE *f;

    char name[30] = "dayo2n";
    int point = 99;

    if ((f = fopen(fname, "w")) == NULL) //파일이 없으면 NULL을 반환하는데 왜 자동생성되지
    //if(fopen_s(&f, fname, "w")!=0)
    {
        printf("Cannot open the file\n");
        exit(1); //인자가 0일땐 정상종료, 1일땐 비정상 종료임을 운영체제에 알림
    };
    //write on file "basic.txt"
    fprintf(f, "이름이 %s인 학생의 성적은 %d 입니다.\n", name, point);
    fclose(f); //꼭 닫기
    puts("프로젝트 폴더에서 파일 basic.txt를 메모장으로 열어보세요.");

    return 0;
}