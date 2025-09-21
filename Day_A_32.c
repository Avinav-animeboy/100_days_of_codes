#include <stdio.h>

int main() {
/*Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
    int n1, n2, i, j;
    int arr1[100], arr2[100], merged[200];

    // Input first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        merged[i] = arr1[i];
    }

    // Input second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Copy arr2 into merged (after arr1)
    for(j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    // Print merged array
    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

/*Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

    long long num;
    int count[10] = {0};  // counts for digits 0-9
    int digit, I, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    // If number is negative, make it positive
    if (num < 0) {
        num = -num;
    }

    // Step 1: Count each digit
    while (num > 0) {
        digit = num % 10;      // get last digit
        count[digit]++;        // increase its count
        num = num / 10;        // remove last digit
    }

    // Step 2: Find which digit occurs the most
    for (I = 0; I < 10; I++) {
        if (count[I] > count[maxDigit]) {
            maxDigit = I;
        }
    }

    printf("Digit that occurs the most: %d\n", maxDigit);

    return 0;
}
