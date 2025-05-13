// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[5];
    int kLen = 5;
    for(int i = 0; i < kLen; i++) {
        printf("Enter the value of the index %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    int new_arr[5];
    int new_arr_itr = 0;
    for(int i = 0; i < kLen; i++) {
        if((arr[i] % 5) == 0) {
            new_arr[new_arr_itr] = arr[i];
            new_arr_itr++;
        }
    }
    printf("The original Array: ");
    for(int i = 0; i < kLen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    if(new_arr_itr > 0){
        printf("The nums divisable by 5 are Array: ");
        for(int i = 0; i < new_arr_itr; i++) {
            printf("%d ", new_arr[i]);
        }
        printf("\n");
    }
    else {
        printf("The array is empty");
    }
    return 0;
}
