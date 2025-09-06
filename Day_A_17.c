#include <stdio.h>
#include <math.h> // Required for sqrt() function

int main() {
/*Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

    int Num, originalNum, remainder, result = 0;

    // Input
    printf("Enter a 3-digit number: ");
    scanf("%d", &Num);

    originalNum = Num;

    // Check Armstrong condition (cube of digits)
    while (Num != 0) {
        remainder = Num % 10;
        result += remainder * remainder * remainder; // cube of digit
        Num /= 10;
    }

    if (result == originalNum)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
/*Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

    int num, i, is_prime = 1; // is_prime is a flag, 1 for prime, 0 for not prime

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle special cases for prime numbers
    if (num <= 1) {
        is_prime = 0; // Numbers less than or equal to 1 are not prime
    } else if (num == 2) {
        is_prime = 1; // 2 is the only even prime number
    } else if (num % 2 == 0) {
        is_prime = 0; // All other even numbers are not prime
    } else {
        // Check for divisibility from 3 up to the square root of num,
        // incrementing by 2 to only check odd divisors.
        for (i = 3; i <= sqrt(num); i += 2) {
            if (num % i == 0) {
                is_prime = 0; // Found a divisor, so it's not prime
                break;       // Exit the loop early
            }
        }
    }

    if (is_prime == 1) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}