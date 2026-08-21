#include <stdio.h>

int main() {

    char ch;
    printf("enter any character=");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z'){
        printf("character is uppercase");
    }
    else if (ch >= 'a' && ch <='z'){
        printf("character is lowercase");
    }
    else if (ch >= '0' && ch <= '9'){
        printf("character is digit");
    }
    else {
        printf("It is a special character!");
    }

    return 0;
}