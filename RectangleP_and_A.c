#include <stdio.h>

int main(){
    int l;
    int b;

    printf("enter length of rectangle=");
    scanf("%d", &l);
    printf("enter breadth of rectangle=");
    scanf("%d", &b);

    printf("area of rectangle= %d\n", l*b);
    printf("perimeter of rectangle= %d\n", 2*(l+b));

    return 0;
}