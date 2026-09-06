#include <stdio.h>


int main(){



    for (int i=1; i<=5; i++){

        for(int j=1; j<=2*i-1; j++){

            printf("*");
            
        } 
        printf("\n");  
    }


    for(int i=1; i<=7; i=i+2){
        for(int j=i; j<=7; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}