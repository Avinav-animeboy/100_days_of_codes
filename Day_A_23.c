#include <stdio.h>

int main() {
/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        sum += (2.0 * i) / (4.0 * i - 1);
    }

    printf("Approximate sum: %.2f\n", sum);
/* Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/

    int i, j;

    for (i = 0; i < 5; i++) {         // 5 rows
        for (j = 0; j < 5; j++) {     // 5 columns
            printf("*");
        }
        printf("\n");                 // Move to next line
    }

    return 0;
}