#include <stdio.h>

int main() {
/*Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
    int n, i;

    // Step 1: Input array size
    scanf("%d", &n);

    int arr[n];

    // Step 2: Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Find the largest element
    int largest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Step 4: Initialize second largest
    int second;
    for(i = 0; i < n; i++) {
        if(arr[i] != largest) {
            second = arr[i];
            break; // pick the first element not equal to largest
        }
    }

    // Step 5: Find the second largest
    for(i = 0; i < n; i++) {
        if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    // Step 6: Print second largest
    printf("%d\n", second);
/*Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

    int N, j, k;

    // Step 1: Input size
    scanf("%d", &N);

    int Arr[N];

    // Step 2: Input array elements
    for(j = 0; j < N; j++) {
        scanf("%d", &Arr[j]);
    }

    // Step 3: Input k (positions to rotate)
    scanf("%d", &k);

    // Step 4: Handle k > n
    k = k % N;

    int temp[k];

    // Step 5: Store last k elements
    for(j = 0; j < k; j++) {
        temp[j] = arr[N - k + j];
    }

    // Step 6: Shift remaining elements to the right
    for(j = N - 1; j >= k; j--) {
        Arr[j] = Arr[j - k];
    }

    // Step 7: Copy temp elements to start
    for(j = 0; j < k; j++) {
        Arr[j] = temp[j];
    }

    // Step 8: Print rotated array
    for(j = 0; j < N; j++) {
        printf("%d ", Arr[j]);
    }
    printf("\n");
    return 0;
}
