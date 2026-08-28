#include <stdio.h>

int main(){
    int n, s;

    printf("enter integer =");
    scanf("%d", &n);

    s=0;
    int a;

    for(int i=0; n != 0; i++){
        a=n%10;
        n=n/10;
        s=s+a;
    }

    printf("sum of digits= %d", s);


    return 0;
}