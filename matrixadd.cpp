#include <stdio.h>
#include <conio.h>
#define row 3
#define col 3
void input(int mat[][col]);
void output(int mat[][col]);
void matrixadd(int mat1[][col], int mat2[][col], int res[][col]);
int i, j;
int main() {
    int mat1[row][col], mat2[row][col], res[row][col];
    printf("\nEnter the first matrix (%d x %d):\n", row, col);
    input(mat1);
    printf("\nEnter the second matrix:\n");
    input(mat2);
    matrixadd(mat1, mat2, res);
    printf("\nSum of matrices:\n");
    output(res);
    getch();
    return 0;
}
void input(int mat[][col]) {
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", (*(mat + i) + j));
        }
        printf("\n");
    }
}
void output(int mat[][col]) {
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}
void matrixadd(int mat1[][col], int mat2[][col], int res[][col]) {
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            *(*(res + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
}