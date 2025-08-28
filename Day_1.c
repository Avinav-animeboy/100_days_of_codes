#include <stdio.h>

int main() {
/*Q1: Write a program to input two numbers and display their sum.


Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
    int a, b, sum;

    // Take input from the user
    scanf("%d %d", &a, &b);

    // Calculate sum
    sum = a + b;

    // Print the result
    printf("Sum = %d\n", sum);


/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
    int A, B;
    
    // Input two numbers
    scanf("%d %d", &A, &B);

    // Calculate and display all results
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", A + B, A -B, A * B, A / B);

    return 0;
}
