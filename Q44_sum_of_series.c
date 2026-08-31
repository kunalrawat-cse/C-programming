#include <stdio.h>

int main(){

    int n;
    printf("enter number of terms =");
    scanf("%d", &n);

    float sum =1;
    float j = 4;

    for(int i=3; i<=3+2*(n-1); i= i+2){
        sum =sum + i/j;

        j=j+2;
    }
    printf("sum of serie till %dth term = %f", n, sum);


    return 0;
}