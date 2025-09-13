#include <stdio.h>

int main() {
/*Q47: Write a program to print the following pattern:
*
**
***
****
*****

Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/

    int i, j;

    // Loop for each row
    for(i = 1; i <= 5; i++) {
        // Loop to print '*' i times
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }
/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345

Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/

    int I,J;

    // Loop for each row
    for(I = 1; I <= 5; I++) {
        // Loop to print numbers from 1 to i
        for(J = 1; J <= I; J++) {
            printf("%d", J);
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}

