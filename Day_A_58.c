#include <stdio.h>

int main() {
/*Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/

    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int prefix[n], suffix[n];

    // Step 1: Build prefix product
    prefix[0] = 1;  // no element before index 0
    for (i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Step 2: Build suffix product
    suffix[n - 1] = 1;  // no element after last index
    for (i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // Step 3: Multiply prefix and suffix for each index
    for (i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }

    // Step 4: Print the result
    printf("Output: [");
    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1)
            printf(",");
    }
    printf("]\n");

    return 0;
}
