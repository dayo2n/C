#include <stdio.h>
#include <string.h>

int main(void)
{
    struct student
    {
        int num;
        char *dept;
        char name[12];
    };

    struct student me = {201902688, "cse", "dayeon"};
    struct student she = {201902691, "cse", "herim"};
    struct student who = {201902691, "cse", "herim"};

    // if (me == she)
    //     printf("both are same");
    //이건 오류

    //문자열 비교시 stcmpr사용 : 같으면 0 을 반환하니까 ! 붙여주기
    if (me.num != she.num)
        puts("학번이 동일하지않습니다");

    if (who.num == she.num && !strcmp(who.name, she.name) && !strcmp(who.dept, she.dept))
        puts("내용이 같은 두 구조체입니다");

    //char pointer는 문자열 상수의 첫 주소를 저장하므로 strcpy, scanf에는 사용 불가

    struct lecture
    {
        char name[20];
        int type;
        int credit;
        int hours;
    } software;

    typedef struct lecture lecture;
    lecture os = {"운영체제", 2, 3, 4};
    lecture *p = &os;

    //->와 .은 우선순위 1순위, 좌에서 우
    //연산자 *는 우선순위 2순위, 우에서 좌

    lecture c[] = {{"인간과사회", 0, 2, 2}, {"확률과통계", 1, 3, 3}, {"자료구조", 2, 3, 3}};
    //구조체 배열
    printf("%lu\n", sizeof(lecture));
    printf("%lu\n", sizeof(c[0]));
    printf("%lu\n", sizeof(c) / sizeof(c[0]));

    return 0;
}