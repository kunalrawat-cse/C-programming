#include <stdio.h>

int main(){

    int n;

    printf("enter number of terms=");
    scanf("%d", &n);

    float j=3;
    float sum=0;

    for(float i=2; i<= 2 + (n-1)*2; i= i+2){

        sum = sum + i/j;

        j=j+4;

    }

    printf("sum of the series=%f", sum);

    return 0;
}