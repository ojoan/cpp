#include <stdio.h>

    /*
    A company hires a plumber at $45.00 per day. Write a program that prompts the user to enter the number of days
    worked by the plumber and prints the net amount to be paid, given that 8% is deducted for income tax.
     */

int main() {
    int numberDays;
    float amountReceived;

    printf("Number of days worked:\n");
    scanf("%d", &numberDays);

    amountReceived = 45 * numberDays;
    amountReceived = amountReceived - (amountReceived *8/100);

    printf("The final amount, after an 8%% discount, was: %.2f\n", amountReceived);
}