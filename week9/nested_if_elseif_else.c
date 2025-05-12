// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Nested iof-else statements
    int work_exp;
    printf("Number of year of service: ");
    scanf("%d", &work_exp);
    
    int bonus = -1;
    if(work_exp >= 5) {    // 5 <= work_exp
        bonus = 1000;      // Bonus is $1000
    }
    else {
        if(work_exp >= 2) { // 2 <= work_exp < 5
            bonus = 100;         // Bonus is $100
        }
        else{ 
            if (work_exp > 0){ // 0 < work_exp < 2
                bonus = 10;         // Bonus is $10
            }
            else {                  // work_exp <= 0
                bonus = 0;          // Bonus is $0
            }
        }
    }
    
    printf("you ar expected to get $%d bonus\n", bonus);
}
