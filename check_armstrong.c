#include <stdio.h>
#include <math.h>

int main(){

    int n, arm;
    printf("enter a number =");
    scanf("%d", &n);

    int num = n ;

    int dig=0;

    while(num != 0){
            dig=dig+1;
            num= num/10;
    }
    arm=0;
    for (int i=n; i != 0;i=i/10 ){
        int a =i%10;
        arm = arm + (pow(a,dig));


    }
    if (arm == n){
        printf("%d is armstrong number", n);

    }
    else{
        printf("Not an armstrong number");
    }

    return 0;
}