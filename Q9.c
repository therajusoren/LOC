// Question no 9

#include <stdio.h>
#include <string.h>
void main()
{
    printf("Enter size of string : ");
    int size;
    scanf("%d", &size);
    char str[size];
    printf("Enter your string : ");
    scanf("%s",str);
    int vowel = 0;
    int strSize = strlen(str);
    for(int i = 0; i < strSize; i++){
        if(str[i] == 'a' ||str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'|| str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U'){
            vowel++;
        }
    }
    int consonant = strSize - vowel;
    printf("Total number of consonants and vowels are respectively %d and %d",consonant, vowel);
}