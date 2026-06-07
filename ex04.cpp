#include<stdio.h>

    //Write a program that converts between Brazilian reais and U.S. dollars.

int main() {
    float final, real;


    printf("Enter the value in R$");
    scanf("%f", &real);

    final = real / 5.3;

    printf("The final price was: $%.2f\n", final);

}