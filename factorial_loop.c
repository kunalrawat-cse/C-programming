#include <stdio.h>

int main(){

    int n,fact;
    printf("enter number for factorial=");
    scanf("%d", &n);

    fact = 1;

    if (n ==0 || n==1){
        printf("factorial = 1");
    }

    if (n > 1){
        for (int i=1; i<=n; i++){

            fact = fact*i;

        }
        printf("factorial = %d", fact);
    }
    
    
    return 0;
}