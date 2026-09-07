#include <stdio.h>

int main(){
    for(int i=1; i<=4; i++){

        for(int j = i; j<4; j++){
            printf(" ");
        }

        for(int j=1; j<=i*2-1; j++){
            printf("*");
        }

        printf("\n");
    }

    for(int i=1; i<=3; i++){

        for(int j=1; j<=i; j++){
            printf(" ");
        }
        
        for(int j=5; j>=i*2-1;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}