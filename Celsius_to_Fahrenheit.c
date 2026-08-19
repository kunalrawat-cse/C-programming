#include <stdio.h>

int main(){
    float C,F;

    printf("enter temperature in celsius to convert=");
    scanf("%f", &C);

    F=C*9/5+32;
    printf("temperatue in fahrenheit=%f", F);


    return 0;
}