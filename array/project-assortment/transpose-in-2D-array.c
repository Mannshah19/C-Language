#include <stdio.h>

int main() {
    int r, c;
    int a[10][10];

    printf("Enter the array's row & column size: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter array's elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe transpose matrix of an array:\n");
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
