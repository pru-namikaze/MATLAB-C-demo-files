// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //Syntax
    // switch(expression) {
    //     case caseResult1:
    //         statements1;
    //         break;
    //     case caseResult2:
    //         statements2;
    //         break;
    //     ...
    //     default:
    //         default_statements;
    //         break;
    // }
    
    // switch(expression) {
    //     case caseResult1: // executes both statements 1 & 2
    //         statements1;
    //     case caseResult2:// executes statements 2
    //         statements2;
    //         break;
    //     ...
    //     default:
    //         default_statements;
    //         break;
    // }
    
    int day_number;
    printf("Enter the day number: ");
    scanf("%d", &day_number);
    
    printf("The day corrosponding to day number %d is ", day_number);
    switch(day_number) {
        case 1: 
            printf("Mon\n"); 
            break;
        case 2: 
            printf("Tue\n"); 
            break;
        case 3:
            printf("Wed\n"); 
            break;
        case 4:
            printf("Thu\n"); 
            break;
        case 5:
            printf("Fri\n"); 
            break;
        case 6:
            printf("Sat\n"); 
            break;
        case 7:
            printf("Sun\n"); 
            break;
        default: printf("Invalid Input provided. Terminating program gracefully.\n"); 
            break;
    }
    return 0;    
}
