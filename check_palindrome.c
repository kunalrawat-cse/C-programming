#include <stdio.h>

int main() {

    int n;

    printf("enter number=");
    scanf("%d", &n);

    int num = n;

    int rev = 0;
    int digit;

    for (int i=0; n !=0; i++){
        
        digit = n % 10;
        n=n/10;
        rev=rev*10 + digit;
    }

    if (num == rev){

        printf("number is palindrome");        
    } else{
        printf("not pallindrome");
    }


    return 0;
}