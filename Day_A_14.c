#include <stdio.h>

int main() {
/*Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

    int n, sum = 0;

    printf("Enter the number of odd numbers to sum: ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for (int i = 0; i < n; i++) {
        sum += (2 * i + 1);
    }

    // Print the result
    printf("%d\n", sum);
/*Q28: Write a program to print the product of even numbers from 1 to N.

Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

    int N, i;
    int product = 1;

    printf("enter the number of even numbers to product: ");
    scanf("%d", &N);

    // Multiply even numbers from 1 to N
    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            product = product * i;
        }
    }

    // Print the result
    printf("%d\n", product);

    return 0;
}