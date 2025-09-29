#include <stdio.h>

int main() {
/*Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

    int rows, cols, i, j;
    int matrix[100][100];
    int distinct = 1; // assume true

    // Step 1: Input size
    scanf("%d %d", &rows, &cols);

    // Step 2: Input matrix
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Compare diagonal elements
    for(i = 0; i < rows; i++) {
        for(j = i + 1; j < rows; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                distinct = 0; // duplicate found
                break;
            }
        }
        if(!distinct) break;
    }

    // Step 4: Print result
    if(distinct)
        printf("True\n");
    else
        printf("False\n");

/*Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

    int ROWS, COLS, I, J;
    int MATRIX[100][100];
    int SUM = 0;

    // Step 1: Input size
    scanf("%d %d", &ROWS, &COLS);

    // Step 2: Ensure it's square
    if(ROWS != COLS) {
        printf("Not a square matrix\n");
        return 0;
    }

    // Step 3: Input matrix
    for(I = 0; I < ROWS; I++) {
        for(J = 0; J < COLS; J++) {
            scanf("%d", &MATRIX[I][J]);
        }
    }

    // Step 4: Sum diagonal elements
    for(I = 0; I < ROWS; I++) {
        SUM += MATRIX[I][I];
    }

    // Step 5: Print result
    printf("%d\n", SUM);

    return 0;
}