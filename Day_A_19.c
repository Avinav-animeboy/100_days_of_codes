#include<stdio.h>

/*Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

// Function to find HCF (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find LCM (a*b/HCF)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    
    printf("enter the values of numbers:");
    scanf("%d %d", &num1, &num2);
    
    // Calculate and print LCM
    printf("%d\n", lcm(num1, num2));

/*Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

    int num, sum = 0, digit;

    printf("enter the number");
    scanf("%d", &num);

    // Loop to extract digits and add them
    while (num > 0) {
        digit = num % 10;   // Get last digit
        sum = sum + digit;  // Add to sum
        num = num / 10;     // Remove last digit
    }

    // Output result
    printf("%d\n", sum);

    return 0;
}
