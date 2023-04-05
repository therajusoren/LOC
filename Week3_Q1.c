#include <stdio.h>
#include <string.h>

void removeChar(char *str, char c) {
    int j = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
}

int main() {
    char str[100];
    char c;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to remove: ");
    scanf("%c", &c);

    removeChar(str, c);

    printf("String after removing '%c': %s", c, str);

    return 0;
}