#include <stdio.h>
#include <math.h>

int main(){
    float P,r,t,SI,CI,A;

    printf("enter principal=");
    scanf("%f", &P);

    printf("enter rate of interest =");
    scanf("%f", &r);

    printf("enter time period(years)=");
    scanf("%f", &t);

    SI = (P*r*t)/100;
    
    A = P*pow((1 + r/100), t);
    CI= A-P;

    printf("simple interest= %f\n",  SI);
    printf("coompoud interest = %f", CI);
    

    return 0;
}
