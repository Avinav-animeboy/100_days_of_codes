#include <stdio.h>

int main() {
/*Q55: Write a program to print all the prime numbers from 1 to n.

Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

    int n, i, j, isPrime;

    printf("enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;  // Assume number is prime
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;  // Not prime
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");

/*Q56: Read and print elements of a one-dimensional array.

Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/

    int N, I, arr[100];

    printf("Input size of array: ");
    scanf("%d", &N);

    // Step 2: Input elements of array
    for (I = 0; I < N; I++) {
        scanf("%d", &arr[I]);
    }

    // Step 3: Output elements of array
    for (I = 0; I < N; I++) {
        printf("%d ", arr[I]);
    }
    printf("\n");
    return 0;
}
