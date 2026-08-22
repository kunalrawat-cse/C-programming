#include <stdio.h>
#include <math.h>

int main(){
    double a, b , c, D, R1, R2;
    printf("enter coefficient of x square=");
    scanf("%lf", &a);

    printf("enter coefficient of x=");
    scanf("%lf", &b);

    printf("enter constant c=");
    scanf("%lf", &c);

    D = (b*b) - (4*a*c);

    if(D >= 0) {
        if(D == 0) {
            R1 = -b/(2*a);
            printf("Roots are real and same = %lf", R1);
        } else {
            R1 = (-b + sqrt(D))/(2*a);
            R2 = (-b - sqrt(D))/(2*a);
             printf("Roots are real and different = %lf, %lf", R1, R2); 
        }
    }
    else if (D < 0) {
        printf("Roots are complex");
    }


    return 0;
}