#include <stdio.h>

int main() {
/*Q29: Write a program to calculate the factorial of a number.

Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

    int n;
    printf("enter a number");
    scanf("%d", &n);

    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }

    printf("%d\n", result);
/*Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

    int num, reversed = 0;
    printf("enter a number ");
    scanf("%d", &num);

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("%d\n", reversed);
    return 0;
}
