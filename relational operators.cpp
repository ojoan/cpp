#include <stdio.h>

int main() {

    printf("10 < 15 --> %d\n", 10 < 15);
    printf("10 > 15 --> %d\n", 10 > 15);
    printf("10 <= 15 --> %d\n", 10 <= 15);
    printf("10 >= 15 --> %d\n", 10 >= 15);
    printf("10 == 15 --> %d\n", 10 == 15);
    printf("10 == 10 --> %d\n", 10 == 10);
    printf("10 != 15 --> %d\n", 10 != 15);
    printf("10 != 10 --> %d\n", 10 != 10);


    //check if the number is negative
    if (-5<0) {
        printf("negative value\n");
    }else {
        printf("positive value\n");
    }


    //true and false
    /*
     0 - false
     != 0 - true
     */

    if (1) {
        printf("-----------------\n");
    }else {
        printf("+++++++++++++++\n");
    }


    return 0;
}