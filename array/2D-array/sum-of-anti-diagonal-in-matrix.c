#include <stdio.h>

int main() {
    int n, sum = 0;
    int a[10][10];

    printf("Enter the array's row & column size: ");
    scanf("%d", &n);

    printf("Enter array's elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if(i + j == n - 1) {
                sum += a[i][j];
            }
        }
    }

    printf("The sum of anti-diagonal elements of an Array: %d", sum);

    return 0;
}
