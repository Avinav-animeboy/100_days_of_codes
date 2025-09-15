#include <stdio.h>

int main() {
/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/

    int N = 5; // number of rows
    
    for (int i = N; i >= 1; i--) {
        // print spaces for indentation
        for (int s = 1; s < i; s++) {
            printf(" ");
        }
        // print numbers
        for (int j = i; j <= N; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

    int n = 3; // peak value (so max stars = 2*n - 1 = 5)

    // First half (1, 3, 5)
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < (2 * i - 1); j++) {
            printf("*\n");
        }
        printf("\n"); // blank line between groups
    }

    // Second half (3, 1)
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < (2 * i - 1); j++) {
            printf("*\n");
        }
        if (i != 1) // avoid extra blank line after last star
            printf("\n");
    }

    return 0;
}
