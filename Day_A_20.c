#include <stdio.h>

int main() {
/*Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

    int Num, Digit;
    int product = 1;
    int hasOdd = 0;  // flag to check if any odd digit exists
    
    printf("enter the number: ");
    scanf("%d", &Num);

    while (Num > 0) {
        Digit = Num % 10;
        if (Digit % 2 == 1) {   // odd digit
            product *= Digit;
            hasOdd = 1;
        }
        Num /= 10;
    }

    if (!hasOdd)  // if no odd digits found
        product = 1;

    printf("%d\n", product);

/*Q40: Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

    long long num, result = 0, place = 1;
    int digit;

    printf("enter the binary no. ");
    scanf("%lld", &num);   // input binary number (like 1010)

    while (num > 0) {
        digit = num % 10;          // get last digit
        if (digit == 0)
            result = result + (1 * place);
        else
            result = result + (0 * place);

        place = place * 10;        // move place value
        num = num / 10;            // remove last digit
    }

    printf("%lld\n", result);

    return 0;
}