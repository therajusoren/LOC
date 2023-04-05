#include <stdio.h>
#include <string.h>

void countFrequency(char *str) {
    int freq[256] = {0};

    int len = strlen(str);

    // Counting frequency of each character
    for (int i = 0; i < len; i++) {
        freq[str[i]]++;
    }

    // Printing frequency of each character
    printf("Character Frequency\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("%c %d\n", i, freq[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countFrequency(str);

    return 0;
}