#include <stdio.h>

int main(){

    int a,b,c;

    printf("enter first number=");
    scanf("%d", &a);
    printf("enter second number=");
    scanf("%d", &b);

    c=b;
    b=a;
    a=c;

    printf("now first number =%d, and second = %d", a, b);




    return 0;
}