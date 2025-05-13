// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[5];
    int kLen = 5;
    for(int i = 0; i < kLen; i++) {
        printf("Enter the value of the index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The arr: ");
    for(int i = 0; i < kLen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int rev_arr[5];
    for(int i = kLen -1; i >= 0; i--) {
        rev_arr[kLen - i -1] = arr[i];
    }
    printf("The reverse arr: ");
    for(int i = 0; i < kLen; i++) {
        printf("%d ", rev_arr[i]);
    }
    printf("\n");
    return 0;
}
