#include <stdio.h>

int main() {
/*Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

    int num;
    printf("enter the number");
    scanf("%d", &num);

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    int binary[32]; // To store binary digits
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Print in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
/*Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

    int Num, original, reversed = 0;

    // Input number
    printf("enter a number");
    scanf("%d", &Num);

    original = Num;  // Store original number

    // Reverse the number
    while (Num != 0) {
        reversed = reversed * 10 + Num%10;
        Num = Num / 10;
    }
    // Check if original and reversed are the same
    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}