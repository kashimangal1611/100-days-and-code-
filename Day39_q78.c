// Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // input size of square matrix

    int matrix[100][100];
    int sum = 0;

    // input matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // sum main diagonal elements
    for(int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("%d", sum);

    return 0;
}


/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/