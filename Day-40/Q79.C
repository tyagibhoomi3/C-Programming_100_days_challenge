Q79: Perform diagonal traversal of a matrix.

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

#include <stdio.h>

int main() {
	printf("Name - Bhoomi Tyagi\n SAP ID - 590028798\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int d = 0; d < rows + cols - 1; d++) {
        int row, col;
        if (d < cols) {
            row = 0;
            col = d;
        } else {
            row = d - cols + 1;
            col = cols - 1;
        }
        while (row < rows && col >= 0) {
            printf("%d ", matrix[row][col]);
            row++;
            col--;
        }
    }

    return 0;
}

