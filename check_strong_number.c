#include <stdio.h>

int main(){

    int n;
    printf("enter a number =");
    scanf("%d", &n);

    int a;
    int cp=n;
    
    int sum=0;

    while ( n!=0 ){
        a= n%10;
        n=n/10;

        
        int fac=1;

        for (int i=1; i<=a; i++){
            fac=fac*i;
        }
        sum=sum + fac;

    }

    if (cp == sum &&  cp>0){
        printf("%d is a strong number", cp);
    }
    else{
        printf("%d is not a strong number", cp);
    }

    return 0;
}