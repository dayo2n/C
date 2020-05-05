#include <stdio.h>//다시하기

#define ROW 5
#define COL 5

int main(void){
    
    int matrix[ROW][COL] = {{78, 48, 79, 98, 58}, 
    {99, 92, 80, 30, 77}, {29, 64, 83, 89, 39}, 
    {34, 78, 90, 56, 49}, {71,38, 11, 36, 82}};

    int height[COL];
    int width[ROW];
    int sum;

    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++){
            height[i] += matrix[i][j];
            width[i] += matrix[j][i];
        }
    }
    for(int i=0; i<ROW; i++){
        printf("%d\n", height[i]);
    }

    return 0;
}