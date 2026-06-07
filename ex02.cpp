#include<stdio.h>

    //Calculating the tip and splitting a restaurant bill

int main() {
    float billTotal, divide;
    int tip, numberPeople;

    printf("Enter the bill total, the tip, and the number of people:\n");


    printf("Enter the bill total: ");
    scanf("%f", &billTotal);
    printf("Enter the tip: ");
    scanf("%d", &tip);
    printf("Enter the number of people: ");
    scanf("%d", &numberPeople);

    billTotal = billTotal + (billTotal * tip/100);
    divide = billTotal/numberPeople;

    printf("The amount of the bill: $%.2f\n", billTotal);
    printf("The amount divided by %d people was: $%.2f", numberPeople, divide);
}