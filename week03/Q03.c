#include <stdio.h>

int main(void){

    int num;

    scanf("%d", &num);
    int n=1;
    for(int i=0; i<num; i++){
        for(int a=num-n; a>0; a--){
            printf(" ");
        }
        for(int b=1; b<=n; b++){
            printf("*");    
            if(b==n){
                printf("\n");
                
            }
        }
        n++;
    }

    return 0;
}