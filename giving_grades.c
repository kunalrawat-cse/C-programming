#include <stdio.h>

int main(){

    int p;
    printf("enter your percentage =");
    scanf("%d", &p);

    if ( p<=100 && p>=90){
        printf(" A Grade\n");
    }
    else if ( p < 90 && p >=80){
        printf(" B Grade\n");
    }
    else if ( p< 80 && p >= 70){
        printf(" C Grade\n");
    }
    else if ( p < 70 && p >= 60){
        printf(" D Grade\n");
    }
    else if ( p < 60){
        printf(" F Grade\n");

    }
    else{
        printf("invalid percentage");
    }



    return 0;
}