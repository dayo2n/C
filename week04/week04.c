#include <stdio.h>

int main(void){

    int alpha[26] = {0};
    char words[10];

    for(int i=0; i<10; i++){
        scanf(" %c", &words[i]);
    }

    for(int i=97; i<123; i++){
        for(int j=0; j<10; j++){
            if(i==words[j]){
                alpha[i-97]++;
            }
        }
    }
    for(int i=97; i<123; i++){
        if(alpha[i-97]!=0){
            printf("%c : %d\n", i, alpha[i-97]);
        }
    }

    return 0;

}