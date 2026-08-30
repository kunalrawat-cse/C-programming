#include <stdio.h>
#include <math.h>

int main(){

    int n, first, mid, last, result ;

    printf("enter a number=");
    scanf("%d", &n);

    int t = n;
    int digits=0;

     while(t !=0){
        digits+=1;
        t=t/10;

     }

    last= n%10;

    first= n/pow(10, (digits - 1));
    
    mid= n%(int)pow(10, (digits - 1));
    mid= mid/10;

    result=last*pow(10, (digits - 1)) +mid*10 + first;

    
    
    

    printf("%d", result);
    return 0;
}