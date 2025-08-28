/*Q7: Write a program to swap two numbers without using a third variable.

Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include <stdio.h>

int main() {
    int a, b;

    // Read input values
    scanf("%d %d", &a, &b);

    // Swap without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Output the result
    printf("After swap: %d %d\n", a, b);

/*Q8: Write a program to find and display the sum of the first n natural numbers.

Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

    int n, sum = 0;

    // Read input
    scanf("%d", &n);

    // Calculate sum of first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Print the result
    printf("Sum=%d\n", sum);

    return 0;
}
