#include <stdio.h>

int main(){
    int n;

    printf("enter any positive integer=");
    scanf("%d", &n);

    int var = 0;

    for (int i=1; i<=n; i++){

        if (n%i==0){
            var = var +1;
        }
    
    }

    if (var == 2){
        printf("%d is a prime number ", n);
    }
    else {

        printf("%d is not a prime number", n);
    }
    

    return 0;
}