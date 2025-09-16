#include <stdio.h>

int main() {
/*
Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

    int i, j;

    // Upper half (1 to 9 stars, odd numbers)
    for (i = 1; i <= 9; i += 2) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (7 to 1 stars, odd numbers)
    for (i = 7; i >= 1; i -= 2) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

/*Q54: Write a program to print the following pattern:

*

***

*****
*******
***

*


Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

    int I, J;

    // Increasing part
    for (I = 1; I <= 7; I += 2) {
        for (J = 0; J < I; J++) {
            printf("*");
        }
        printf("\n");
    }

    // Decreasing part
    for (I = 3; I >= 1; I -= 2) {
        for (J = 0; J < I; J++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

