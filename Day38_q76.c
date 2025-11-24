// Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);   // input size of square matrix

    int matrix[100][100];
    int isSymmetric = 1;  // assume symmetric

    // input matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // check symmetry
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;  // not symmetric
                break;
            }
        }
        if(!isSymmetric) break;
    }

    if(isSymmetric)
        printf("True");
    else
        printf("False");

    return 0;
}


/*
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