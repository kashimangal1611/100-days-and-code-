// Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];
    
    // input matrix
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // diagonal traversal
    for(int line = 1; line <= (rows + cols - 1); line++) {
        int start_col = line <= cols ? line - 1 : cols - 1;
        int start_row = line <= cols ? 0 : line - cols;
        
        int i = start_row, j = start_col;
        while(i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

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
1 2 4 7 5 3 6 8 9

*/