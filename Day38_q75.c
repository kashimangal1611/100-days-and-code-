// Q75: Add two matrices.

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    scanf("%d %d", &rows1, &cols1);   // input size of first matrix

    int matrix1[100][100], matrix2[100][100], sum[100][100];

    // input first matrix
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    scanf("%d %d", &rows2, &cols2);   // input size of second matrix

    // input second matrix
    for(int i = 0; i < rows2; i++) {
        for(int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // check if addition is possible
    if(rows1 != rows2 || cols1 != cols2) {
        printf("Matrices cannot be added");
        return 0;
    }

    // add matrices
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // print sum matrix
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/*
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