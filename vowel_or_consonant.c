#include <stdio.h>

int main(){

    char ch;
    printf("enter any alphabet=");
    scanf("%c", &ch);

    if ( (ch >= 'a' && ch <= 'z') ||(ch >= 'A' && ch <= 'Z')){
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("Alphabet is vowel");

        } else{
            printf("Alphabet is consonant");


        }


    }
    else{
        printf("not an alphabet");
    }


    return 0;
}