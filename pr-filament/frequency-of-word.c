#include <stdio.h>

void countFrequency(char str[]){
    int freq[256] = {0};
    int i;

    for(i = 0; str[i] != '\0'; i++){
        freq[(int)str[i]]++;
    }

    printf("\nCharacter Frequencies:\n");
    for(i = 0; i < 256; i++){
        if(freq[i] > 0){
            printf("%c => %d\n", i, freq[i]);
        }
    }
}

int main() {
    char str[50];

    printf("Enter a word: ");
    scanf("%[^\n]%*c", str);

    countFrequency(str);

    return 0;
}
