/*Q138: Print all enum names and integer values using a loop.

Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

// Creating enum for colors
enum Color {
    RED,
    YELLOW,
    GREEN
};

int main() {
    // Arrays to store enum names in the same order
    char *names[] = {"RED", "YELLOW", "GREEN"};

    // Loop through enum values
    for (int i = 0; i < 3; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}
