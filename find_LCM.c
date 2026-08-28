#include <stdio.h>

int main(){

    int a,b,num;

    printf("enter first number =");
    scanf("%d", &a);

    printf("enter second number =");
    scanf("%d", &b);

    for (int i=1; ;i++){
        if (i%a == 0 && i%b==0){
            num =i;
            break;
        }
    }

    printf("LCM=%d", num);

    return 0;
}