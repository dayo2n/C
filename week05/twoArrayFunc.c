#include <stdio.h>

double sum(double data[][3], int, int);
//함수 호출 전 main문 안에도 작성 가능
//2차원 배열을 매개변수로 할때는 두번째 대괄호의 크기는 꼭 작성

int main(void)
{
    double x[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    int row = sizeof(x) / sizeof(x[0]);       //4
    int col = sizeof(x[0]) / sizeof(x[0][0]); //3
    //sizeof(x) = 12, sizeof(x[0]) = 3, sizeof(x[0][0]) = 1

    printf("2차원 배열의 원소합은 %.3lf 입니다.\n", sum(x, row, col));

    return 0;
}

double sum(double (*data)[3], int row, int col)
//double sum(double data[][3], int row, int col) 로 사용 가능
{
    double total = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            total += data[i][j];
        }
    }

    return total;
}