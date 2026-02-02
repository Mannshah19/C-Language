#include <stdio.h>

int main() {
    int i, j, k, space;
    int n = 5;

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (space = 1; space <= (n - i) * 2; space++) {
            printf(" ");
        }

        for (k = i; k >= 1; k--) {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
