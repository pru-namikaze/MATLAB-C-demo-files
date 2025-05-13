// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Syntax:
    // if(expression) {
    //     if_true_statements;
    // }
    // else {
    //     else_false_statements;
    // }
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("The number %d is an ");
    if(num % 2 == 0) {
        printf("even number\n");
    }
    else {
        printf("odd number\n");
    }
}
