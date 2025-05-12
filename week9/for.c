// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //Syntax:
    // for(variable_declaration; checking_conditions; variable_updation) {
    //     statements;
    // }
    
    for(int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    
    printf("\n");
    
    for(int i = 5; i > 0; i--) {
        printf("%d ", i);
    }
    return 0;
}
