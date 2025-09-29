#include <stdio.h>

int main() {
/*Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

    int ROWS, COLS, I, J;
    int MATRIX[100][100];

    // Step 1: Input size
    scanf("%d %d", &ROWS, &COLS);

    // Step 2: Input matrix
    for(I = 0; I < ROWS; I++) {
        for(J = 0; J < COLS; J++) {
            scanf("%d", &MATRIX[I][J]);
        }
    }

    // Step 3: Traverse diagonals starting from first row
    for(int START = 0; START < COLS; START++) {
        I = 0;
        J = START;
        while(I < ROWS && J >= 0) {
            printf("%d ", MATRIX[I][J]);
            I++;
            J--;
        }
    }

    // Step 4: Traverse diagonals starting from last column
    for(int START = 1; START < ROWS; START++) {
        I = START;
        J = COLS - 1;
        while(I < ROWS && J >= 0) {
            printf("%d ", MATRIX[I][J]);
            I++;
            J--;
        }
    }
    printf("\n");
    

/*Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

    int r1, c1, r2, c2, i, j, k;
    int a[100][100], b[100][100], c[100][100];

    // Step 1: input size of first matrix
    scanf("%d %d", &r1, &c1);
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Step 2: input size of second matrix
    scanf("%d %d", &r2, &c2);
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Step 3: check if multiplication is possible
    if(c1 != r2) {
        printf("Matrix multiplication not possible");
        return 0;
    }

    // Step 4: multiply matrices
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            c[i][j] = 0;
            for(k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Step 5: print result
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
