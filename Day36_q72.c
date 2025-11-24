// Q72: Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);   // input rows and columns

    int matrix[100][100], sum = 0;

    // input matrix and calculate sum
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];   // add each element to sum
        }
    }

    printf("%d", sum);

    return 0;
}


/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/