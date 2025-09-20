#include <stdio.h>

int main() {
/*Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

    int m, j, key;
    int Arr[100]; 

    printf("Enter number of elements: ");
    scanf("%d", &m);

    printf("Enter %d elements: ", m);
    for(j = 0; j < m; j++) {
        scanf("%d", &Arr[j]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // search element one by one
    for(j = 0; j < m; j++) {
        if(Arr[j] == key) {
            printf("Found at index %d\n", j);
            return 0; // stop program after finding
        }
    }

    // if loop finishes, element not found
    printf("-1\n");

/*Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

    int n, i, temp;
    int arr[100];  // fixed size for beginners

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse logic (swap first with last, second with second-last, etc.)
    for(i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}