#include <stdio.h>

int main(){
    int a;
    int b;
    

    printf("enter first number=");
    scanf("%d", &a);
    printf("enter second number=");
    scanf("%d", &b);

    int sum = a+b;
    int prod= a*b;
    
    
    printf("sum =%d\n", sum);
    if (a >= b){
        int diff = a-b;
        printf("difference =%d\n", diff);
    }
    else{
        int diff = b-a;
        printf("difference =%d\n", diff);
    }    

    printf("product =%d\n", prod);
    if (b==0){
        printf("quotient = not defined");
    }
    else{
        if(a>=b){
            int quot = a/b;
            printf("quotient =%d\n", quot);
        }
        else{
            int quot = b/a;
            printf("quotient =%d\n", quot);
        }

     
    }


    return 0;

}


