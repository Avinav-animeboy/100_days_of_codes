#include<stdio.h>

int main() {
/*Q11: Write a program to input an integer and check whether it is even or odd using if–else.

Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

    int num;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

    int Num;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &Num);

    // Check using nested if-else
    if (Num >= 0) {
        if (Num == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    }
    else {
        printf("Negative\n");
    }

    return 0;
}
