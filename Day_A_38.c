#include <stdio.h>

int main() {
/*Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

    int ROWS1, COLS1, ROWS2, COLS2, I, J;

    // Step 1: Input size of first matrix
    scanf("%d %d", &ROWS1, &COLS1);

    int A[100][100], B[100][100], C[100][100];

    // Step 2: Input first matrix
    for(I = 0; I < ROWS1; I++) {
        for(J = 0; J < COLS1; J++) {
            scanf("%d", &A[I][J]);
        }
    }

    // Step 3: Input size of second matrix
    scanf("%d %d", &ROWS2, &COLS2);

    // Check if dimensions match
    if(ROWS1 != ROWS2 || COLS1 != COLS2) {
        printf("Matrix dimensions must match!\n");
        return 0;
    }

    // Step 4: Input second matrix
    for(I = 0; I < ROWS2; I++) {
        for(J = 0; J < COLS2; J++) {
            scanf("%d", &B[I][J]);
        }
    }

    // Step 5: Add matrices
    for(I = 0; I < ROWS1; I++) {
        for(J = 0; J < COLS1; J++) {
            C[I][J] = A[I][J] + B[I][J];
        }
    }

    // Step 6: Print result
    for(I = 0; I < ROWS1; I++) {
        for(J = 0; J < COLS1; J++) {
            printf("%d ", C[I][J]);
        }
        printf("\n");
    }

/*Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

    int rows, cols, i, j;
    int symmetric = 1; // assume true

    // Step 1: Input size
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];

    // Step 2: Symmetry possible only if square
    if(rows != cols) {
        printf("False\n");
        return 0;
    }

    // Step 3: Input matrix
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 4: Check symmetry
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                symmetric = 0; // false
                break;
            }
        }
        if(!symmetric) break; // stop early
    }

    // Step 5: Print result
    if(symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
