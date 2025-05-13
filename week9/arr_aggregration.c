// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[5];
    int kLen = 5;
    for(int i = 0; i < kLen; i++) {
        printf("Enter the value of the index %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    int arr_product = 1;
    for(int i = 0; i < kLen; i++) {
        arr_product *= arr[i]; // <==> arr_product = arr_product * arr[i]arr[i];
    }
    int arr_sum = 0;
    for(int i = 0; i < kLen; i++) {
        arr_sum += arr[i];
    }
    
    printf("The arr: ");
    for(int i = 0; i < kLen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("The product and sum of all elements in the array are %d and %d\n", arr_sum, arr_product);
    return 0;
}
