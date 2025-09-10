#include <stdio.h>

int main() {
/*Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

    int num, first, last, temp, digits = 0, divisor = 1, middle, result;

    printf("enter the required no.- ");
    scanf("%d", &num);

    temp = num;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // If only 1 digit, no swap needed
    if (digits == 1) {
        printf("%d\n", num);
        return 0;
    }

    // Find divisor for first digit
    for (int i = 1; i < digits; i++) {
        divisor *= 10;
    }

    // Extract first and last digit
    first = num / divisor;
    last = num % 10;

    // Extract middle part
    middle = (num % divisor) / 10;

    // Rebuild number: last + middle + first
    result = last * divisor + middle * 10 + first;

    printf("%d\n", result);
/*Q42: Write a program to check if a number is a perfect number.

Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

    int Num, i, sum = 0;

    printf("enter a no.- ");
    scanf("%d", &Num);

    // Find divisors and sum them
    for (i = 1; i <= Num / 2; i++) {
        if (Num % i == 0) {
            sum += i;
        }
    }

    // Check if perfect
    if (sum == Num)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");

    return 0;
}