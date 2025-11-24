// Q74: Find the transpose of a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);   // input rows and columns

    int matrix[100][100];

    // input matrix elements
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // print transpose
    for(int j = 0; j < cols; j++) {
        for(int i = 0; i < rows; i++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/*
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