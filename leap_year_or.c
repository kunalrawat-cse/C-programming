#include <stdio.h>

int main() {
    int Y;
    printf("enter year=");
    scanf("%d", &Y);

    if (Y % 4 == 0){
        if (Y % 100 == 0){
            if (Y % 400 == 0){
                printf("leap year ");
            }
            else {
                printf(" not a leap year");
            }
        }
        else{
            printf("leap year");
        }
    }
    else{
        printf("not a leap year");

    }


    return 0;
}