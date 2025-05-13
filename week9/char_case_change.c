// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("the character entered is %c ", c);
    if(('a' <= c) && (c <= 'z')) {
        char uppercase_c = c - 'a' + 'A';
        printf("which is in lowercase and its Uppercase is %c.\n", uppercase_c);
    }
    else {
        printf(" whcih is not a lowercase english alphabet character.\n");
    }
    return 0;
}
