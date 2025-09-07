#include <stdio.h>

int main(){

/*Q35: Write a program to print all factors of a given number.

Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/

    int n, i;

    printf("enter the number");
    scanf("%d", &n);

    // Print factors
    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
/*Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

    int a, b;

    printf("enter the values of numbers:");
    scanf("%d %d", &a, &b);

    // Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    // Now a contains the HCF
    printf("%d\n", a);

    return 0;
}