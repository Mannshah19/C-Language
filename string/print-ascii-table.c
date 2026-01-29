#include <stdio.h>

int main() {
    int i;

    printf("Digits (0 to 9):\n");
    for (i = 48; i <= 57; i++) {
        printf("%c ", i);
    }

    printf("\n\nUppercase Alphabets (A to Z):\n");
    for (i = 65; i <= 90; i++) {
        printf("%c ", i);
    }

    printf("\n\nLowercase Alphabets (a to z):\n");
    for (i = 97; i <= 122; i++) {
        printf("%c ", i);
    }

    return 0;
}
