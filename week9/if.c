// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Syntax:
    // if(expression) {
    //     statements;
    // }
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int abs_num = num;
    if(abs_num < 0) {
        abs_num = abs_num * (-1);
    }
    printf("The absolute number of the number %d is %d", num, abs_num);
}
