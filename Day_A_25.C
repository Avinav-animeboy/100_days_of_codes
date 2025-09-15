#include <stdio.h>

int main() {
/*Q49: Write a program to print the following pattern:
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

    int N = 5; // number of lines
    
    for (int i = N; i >= 1; i--) {
        for (int j = i; j <= N; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
/*Q50: Write a program to print the following pattern:
*****
  ****
    ***
      **
        *

Sample Test Cases:
Input 1:

Output 1:
*****
  ****
    ***
      **
        *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

    int n = 5; // number of rows
    
    for (int i = 0; i < n; i++) {
        // print spaces for indentation
        for (int s = 0; s < i * 2; s++) {
            printf(" ");
        }
        // print stars
        for (int j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}