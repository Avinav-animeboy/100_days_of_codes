#include <stdio.h>

int main(void) {
/*Q57: Find the sum of array elements.

Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3
*/

    int N, I, sum = 0;

    printf("input the size of array: ");
    scanf("%d", &N);

    int Arr[N];

    // Input array elements
    for(I = 0; I < N; I++) {
        scanf("%d", &Arr[I]);
    }

    // Calculate sum
    for(I = 0; I < N; I++) {
        sum += Arr[I];
    }

    // Output result
    printf("%d\n", sum);

/*Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

    int n, i;
    
    printf("input the size of array: ");
    scanf("%d", &n);
    
    
    int arr[n];
    
    // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize max and min with first element
    int max = arr[0];
    int min = arr[0];
    
    // Find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    
    // Output
    printf("Max=%d, Min=%d\n", max, min);
    
    return 0;
}

