#include <stdio.h>

int main() {

    float S,C;

    printf("enter cost price=");
    scanf("%f", &C);

    printf("enter selling price=");
    scanf("%f", &S);

    if (S > C){
        float P;
        P = ((S-C)/C) * 100;
        printf("profit percentage = %f%%", P );
    }

    else if (C > S){
        float L;
        L = ((C-S)/C)*100;
        printf("loss percentage = %f%%", L);
    }
    else if(C ==  S){
        printf("0%%");
    }



    return 0;
}