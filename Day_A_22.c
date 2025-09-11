#include <stdio.h>
/*Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, digit, sum = 0;

    printf("enter the number");
    scanf("%d", &num);

    temp = num;

    // Find sum of factorials of digits
    while(temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    // Check if Strong number
    if(sum == num)
        printf("Strong number\n");
    else
        printf("Not strong number\n");
/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

    int n;
    double Sum = 0.0;

    printf("enter no. of terms");
    scanf("%d", &n);

    // Calculate sum of series
    for(int i = 1; i <= n; i++) {
        Sum += (double)(2 * i - 1) / (2 * i);
    }

    // Output approximate sum
    printf("Approximate sum: %.1f\n", Sum);

    return 0;
}
