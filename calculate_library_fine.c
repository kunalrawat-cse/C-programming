#include <stdio.h>

int main(){
    int n,fine;

    printf("enter number of late days=");
    scanf("%d", &n);  
    
    if (n>0 && n<=30){

        if (n>0 && n <=5){
        fine = 2*n;
        }
        else if(n> 5 && n<=10){
        fine = 10 + (n-5)*4;
        }   
        else if (n>10 && n<=30){
        fine = 30 + (n-10)*6;
        }

        printf("Fine = %d Rupees", fine);
    }


    if (n > 30) {
        printf("Membership cancelled.");
    }
    return 0;
}
