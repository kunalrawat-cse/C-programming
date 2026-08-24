#include <stdio.h>

int main(){

    int n, bill;

    printf("enter number of units=");
    scanf("%d", &n);

    if(n>0 && n<=100){
        bill = n*5;
    }
    else if(n>100 && n<=200){
        bill= 500 + 7*(n-100);
    }
    else if(n>200 && n<=300){
        bill = 1200 + 10*(n-200);
    }
    else if(n > 300){
        bill = 2200 + (n-300)*12;
    }

    printf("Bill: %d Rupees ", bill);
    return 0;
}