#include <stdio.h>

int main() {
/*Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

    int rows, cols, i, j;

    // Step 1: Input matrix size
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];
    int rowSums[100]; // To store sum of each row

    // Step 2: Input elements
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Calculate sum of each row
    for(i = 0; i < rows; i++) {
        int sum = 0;
        for(j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        rowSums[i] = sum; // store in array
    }

    // Step 4: Print row sums
    for(i = 0; i < rows; i++) {
        printf("%d ", rowSums[i]);
    }
    printf("\n");

/*Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/


    int ROWS, COLS, I, J;

    // Step 1: Input size
    scanf("%d %d", &ROWS, &COLS);

    int MATRIX[100][100], TRANSPOSE[100][100];

    // Step 2: Input matrix
    for(I = 0; I < ROWS; I++) {
        for(J = 0; J < COLS; J++) {
            scanf("%d", &MATRIX[I][J]);
        }
    }

    // Step 3: Compute transpose
    for(I = 0; I < ROWS; I++) {
        for(J = 0; J < COLS; J++) {
            TRANSPOSE[J][I] = MATRIX[I][J];
        }
    }

    // Step 4: Print transpose
    for(I = 0; I < COLS; I++) {
        for(J = 0; J < ROWS; J++) {
            printf("%d ", TRANSPOSE[I][J]);
        }
        printf("\n"); // new line for each row
    }

    return 0;
}
