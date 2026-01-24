#include <stdio.h>

int main() {
    int r, c;
    int a[10][10];
    int rowNum, colNum;
    int rowSum = 0, colSum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &r);

    printf("Enter the array's column size: ");
    scanf("%d", &c);

    printf("\nEnter array's elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }


    printf("\nEnter row number: ");
    scanf("%d", &rowNum);

    printf("Elements of row %d: ", rowNum);
    for (int j = 0; j < c; j++) {
        printf("%d ", a[rowNum][j]);
        rowSum += a[rowNum][j];
    }
    printf("\nThe sum of a row %d: %d\n", rowNum, rowSum);


    printf("\nEnter column number: ");
    scanf("%d", &colNum);

    printf("Elements of column %d: ", colNum);
    for (int i = 0; i < r; i++) {
        printf("%d ", a[i][colNum]);
        colSum += a[i][colNum];
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);

    return 0;
}
