#include <stdio.h>

    /*
    Write a program that reads the number of seconds entered by the user and displays
    the conversion to hours, minutes, and seconds on the screen.
    */

int main() {
    int seconds, h, m, s, rest;

    printf("Enter a number of seconds: ");
    scanf("%d", &seconds);

    h=seconds/3600;
    rest=seconds%3600;
    m=rest/60;
    s=rest%60;

    printf("conversion: %d:%d:%d", h, m, s);
}