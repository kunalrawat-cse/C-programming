#include <stdio.h>

int main(){
    int n;
    printf("enter an integer=");
    scanf("%d", &n);

    if (n >= 0){
        if (n==0){
            printf("zero");
        }
        else{
            printf("number is positive ");
        }
       
    }
    else {
        printf("number is negative");
    }


    return 0;
}