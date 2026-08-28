#include <stdio.h>

int main(){

    int a,b;

    printf("enter first number =");
    scanf("%d", &a);

    printf("enter second number =");
    scanf("%d", &b);

    int num=1;
    int fac;

    if (a>=b){
        for (int i=1; i<=a; i++){
            if (a%i==0 && b%i==0){
                fac = i;
            }
            if (fac > num){
                num = fac;
            }

        }
    } else {
        for (int i=1; i<=b; i++){
            if (a%i==0 && b%i==0){
                fac = i;
            }
            if (fac > num){
                num = fac;
    }}}

    printf("HCF = %d", num);


    return 0;
}