#include <stdio.h>

int main() {
    int sec, min, hrs;

    printf("enter time in seconds=");
    scanf("%d", &sec);

    min = sec/60;
    sec = sec%60;
    hrs = min/60;
    min= min % 60;

    printf("%d:%d:%d", hrs, min , sec);


    return 0;
}