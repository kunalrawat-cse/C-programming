#include <stdio.h>

int swap(int a, int b);

int main(){

    int a,b;

    printf("enter first number=");
    scanf("%d", &a);
    printf("enter second number=");
    scanf("%d", &b);

    a=a+b;
    b=a-b;
    a=a-b;
    
    

    printf("now first number =%d, and second = %d", a, b);




    return 0;
}

int swap(int a, int b){
    return b;
}