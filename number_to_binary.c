
#include <stdio.h>

#include <math.h>

int main(){
    int n, place = 1, b = 0;
    printf("enter a number=");
    scanf("%d",&n);

    int a;
    
    while(n!=0){
        a= n%2;
        n=n/2;

        b= b + a*place;
        place= place*10;


    }

    printf("binary form= %d ", b);




    return 0;
}

