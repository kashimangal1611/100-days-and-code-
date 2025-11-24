// Q80: Multiply two matrices.

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);  // size of first matrix

    int matrix1[100][100], matrix2[100][100], product[100][100] = {0};

    // input first matrix
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);  // size of second matrix

    // input second matrix
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // check if multiplication is possible
    if(c1 != r2) {
        printf("Matrix multiplication not possible");
        return 0;
    }

    // multiply matrices
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // print product matrix
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            printf("%d ", product[i][j]);
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
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/