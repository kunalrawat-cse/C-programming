#include <stdio.h>

int main(){
    
    int e, prod;
    printf("enter even number for product=");
    scanf("%d", &e);

    prod=1;

    for(int i=2; i<=e; i = i +2){
        prod= prod*i;

    }
    printf("product of even numbers=%d", prod);







    return 0;
}