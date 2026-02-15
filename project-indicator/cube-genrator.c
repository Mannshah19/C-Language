#include <stdio.h>

void cubeElements(int *ptr, int size) {
    int i, j;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            int val = *(ptr + i * 10 + j);
            printf("%d ", val * val * val);
        }
        printf("\n");
    }
}

int main() {
    int a[10][10];
    int size, i, j;

    printf("Enter array's size: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Cubes of all elements:\n");
    cubeElements(&a[0][0], size);

    return 0;
}
