#include <stdio.h>

int main(){

    int a,b,c;

    printf("enter first=");
    scanf("%d", &a);

    printf("enter second=");
    scanf("%d", &b);

    printf("enter third=");
    scanf("%d", &c);

    if (a>=b && a>=c){
        printf("%d is largest", a);
    }
    else if (b>=a && b>=c){
        printf("%d is largest", b);
        }
    else if(a==b && b==c){
        printf("all are equal");
    }
    else {
        printf("%d is largest", c);
    }


    return 0;
}