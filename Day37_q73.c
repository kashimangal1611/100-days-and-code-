// Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);   // input rows and columns

    int matrix[100][100], rowSum[100];

    // initialize rowSum array
    for(int i = 0; i < rows; i++) {
        rowSum[i] = 0;
    }

    // input matrix and calculate row sums
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];   // add element to current row sum
        }
    }

    // print row sums
    for(int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
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
6 15

*/