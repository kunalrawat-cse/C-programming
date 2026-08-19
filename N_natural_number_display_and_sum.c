#include <stdio.h>

int main(){
    
    int n, sum=0;
    printf("enter number of terms=");
    scanf("%d", &n);

    for (int i=1; i<=n; i++ ){
        printf("%d\t", i);
        sum+=i;
    }
    printf("\n");

    printf("sum of n natural numbers=%d", sum);


    return 0;
}