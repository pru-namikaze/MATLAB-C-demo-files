// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Syntax:
    // while(condition) {
    //     statements;
    // }
    
    char str[101] = "hello";
    printf("Characters inside of the string in order of thier occurance with duplicates are: \n");
    // for(int i = 0; i < 101; i++) {
    //     printf("%c\n", str[i]);
    // }
    printf("Using \"for\" loop: \n");
    for(int i = 0; str[i] != '\0' && i < 101; i++) {
        printf("%c\n", str[i]);
    }
    printf("\n");

    printf("Using \"while\" loop: \n");
    int idx = 0;
    while(str[idx] != '\0' && idx < 101) {
        printf("%c\n", str[idx]);
        idx++;
    }
    printf("\n");
    return 0;
}
