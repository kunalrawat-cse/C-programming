#include <stdio.h>

int main(){

    int n;
    printf("enter a number=");
    scanf("%d", &n);
    int a;
    int prod = 1;

    for (int i = 1; n!=0; i++){
        a=n%10;
        n=n/10;
        if (a%2 != 0){

            prod=prod*a;
        }
    }

    printf("product of odd digits= %d", prod);

    return 0;
}