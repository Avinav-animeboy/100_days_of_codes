#include <stdio.h>

int main() {
/*Q59: Count even and odd numbers in an array.

Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
    int n, i;
    
    printf("Input size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int evenCount = 0, oddCount = 0;
    
    // Count even and odd
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    
    // Output
    printf("Even=%d, Odd=%d\n", evenCount, oddCount);
    
/*Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

    int m, j;
    
    printf("Input size of array: ");
    scanf("%d", &m);
    
    int Arr[m];
    
    // Input array elements
    for(j = 0; j < m; j++) {
        scanf("%d", &Arr[j]);
    }
    
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    
    // Count positive, negative, zero
    for(j = 0; j < m; j++) {
        if(Arr[j] > 0)
            positiveCount++;
        else if(Arr[j] < 0)
            negativeCount++;
        else
            zeroCount++;
    }
    
    // Output
    printf("Positive=%d, Negative=%d, Zero=%d\n", positiveCount, negativeCount, zeroCount);
    
    return 0;
}


