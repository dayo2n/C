#include <stdio.h>

void func1(void);
int salary = 5000;

int main(void)
{

    printf("Before : %d\n", salary);
    func1();
    printf("After : %d\n", salary);

    return 0;
}

void func1(void)
{
    int salary;

    salary = 7000;
    printf("Func1 : %d\n", salary);
    salary = 8000;
}

//5000 7000 5000