#include <stdio.h>

int main(){
    int n;
    printf("enter a number =");
    scanf("%d", &n);

    int sum=0;

    for (int i=1; i<n; i++){

        if ( n % i== 0){
            sum=i+sum;

        }
    }

    if (sum == n){
        printf("%d is a perfect number!",n);
    }
    else{
        printf("%d is not a perfect number :(", n);
    }

    return 0;
}