#include <stdio.h>
#include <math.h>
/*Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Step 1: Calculate total sum from 1 to n
    int totalSum = n * (n + 1) / 2;

    // Step 2: Use formula to find possible pivot integer
    double x = sqrt(totalSum);   // sqrt(total sum)

    // Step 3: Check if x is a whole number
    if (x == (int)x) {
        printf("%d\n", (int)x);  // valid pivot integer
    } else {
        printf("-1\n");           // no pivot integer exists
    }

    return 0;
}
