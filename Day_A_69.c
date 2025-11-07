/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>

int main() {
    int n, nums[100], seen[100] = {0};  // seen[] keeps track of numbers
    int i;

    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);

        // Check if number already appeared
        if (seen[nums[i]] == 1) {
            printf("Repeated element: %d\n", nums[i]);
            return 0;  // exit after finding
        }

        // Mark number as seen
        seen[nums[i]] = 1;
    }

    // If no repetition found
    printf("No repeated element found\n");
    return 0;
}
