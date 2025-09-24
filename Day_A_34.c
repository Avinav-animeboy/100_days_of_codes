#include <stdio.h>

int main() {
/*Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

    int n, i, pos, element;
    
    // Step 1: Input size
    scanf("%d", &n);
    
    int arr[100];  // array with extra space
    
    // Step 2: Input elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Step 3: Input position and element
    scanf("%d %d", &pos, &element);
    
    // Step 4: Shift elements to the right
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Step 5: Insert element
    arr[pos] = element;
    n++;  // increase size
    
    // Step 6: Print updated array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

/*Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 3 4 5

*/

    int N, I, Pos;
    
    // Step 1: Input size
    scanf("%d", &N);
    
    int Arr[100];  // array with extra space
    
    // Step 2: Input elements
    for(I = 0; I < N; I++) {
        scanf("%d", &Arr[I]);
    }
    
    // Step 3: Input position to delete
    scanf("%d", &Pos);
    
    // Step 4: Shift elements left from pos
    for(I = Pos; I < N; I++) {
        Arr[I - 1] = Arr[I];
    }
    
    // Step 5: Reduce size
    N--;
    
    // Step 6: Print updated array
    for(I = 0; I < N; I++) {
        printf("%d ", Arr[I]);
    }
    printf("\n");
    
    return 0;
}