#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("It is a vowel.\n"); break;
        default:
            if (ch >= '0' && ch <= '9')
                printf("It is a digit.\n");
            else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                printf("It is a consonant.\n");
            else
                printf("It is a special character.\n");
    }

    return 0;
}
