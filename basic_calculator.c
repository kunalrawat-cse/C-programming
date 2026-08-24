#include <stdio.h>

int main() {
    int a, b, result;
    char o;

    printf("Enter first number = ");
    scanf("%d", &a);

    printf("Enter second number = ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &o);

    switch (o) {
        case '+':
            result = a + b;
            break;

        case '-':
            result = a - b;
            break;

        case '/':
            result = a / b;
            break;

        case '*':
            result = a * b;
            break;

        case '%':
            result = a % b;
            break;

        default:
            printf("Invalid operator");
            return 0;
    }

    printf("Answer = %d", result);

    return 0;
}