#include <stdio.h>

int main(){
    int n, t, sum;
    printf("enter number of terms for odd numbers=");
    scanf("%d", &n);

    t = 1 + ((n-1)*2);
    sum = 0;
    
    for (int i=1; i<=t ; i=i + 2 ){
        sum = sum + i;
        
        }
    
    printf("sum of n odd numbers= %d", sum);


    return 0;
}