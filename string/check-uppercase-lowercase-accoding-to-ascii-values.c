#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 65 && ch <= 90)
        printf("Uppercase letter");
    else if (ch >= 97 && ch <= 122)
        printf("Lowercase letter");
    else
        printf("Not an alphabet");

    return 0;
}
