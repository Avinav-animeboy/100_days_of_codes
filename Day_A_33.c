#include <stdio.h>

int main() {
/*Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

    int n, i, key;
    
    // Input array size
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input key to search
    scanf("%d", &key);
    
    int low = 0, high = n - 1, mid;
    int found = -1;  // assume not found
    
    while(low <= high) {
        mid = (low + high) / 2;
        
        if(arr[mid] == key) {
            found = mid; // index found
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1; // search right side
        }
        else {
            high = mid - 1; // search left side
        }
    }
    
    if(found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");

/*Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

    int N, I, element;
    
    // Step 1: Input size of array
    scanf("%d", &N);
    
    int Arr[100];  // make array big enough
    
    // Step 2: Input sorted array elements
    for(I = 0; I < N; I++) {
        scanf("%d", &Arr[I]);
    }
    
    // Step 3: Input element to insert
    scanf("%d", &element);
    
    // Step 4: Find correct position from end
    int j = N - 1;
    while(j >= 0 && Arr[j] > element) {
        Arr[j + 1] = Arr[j];  // shift elements right
        j--;
    }
    
    // Step 5: Insert element
    Arr[j + 1] = element;
    N++;  // increase size
    
    // Step 6: Print updated array
    for(I = 0; I < N; I++) {
        printf("%d ", Arr[I]);
    }
    printf("\n");
    return 0;
}