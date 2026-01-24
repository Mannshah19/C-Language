#include <stdio.h>

int main() {
    int r, c;
    int sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter array elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);

            
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1) {
                sum += a[i][j];
            }
        }
    }

    printf("Sum of boundary elements: %d\n", sum);

    return 0;
}
