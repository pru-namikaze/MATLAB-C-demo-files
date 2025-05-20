#include<stdio.h>
#include<stdlib.h>

int main(void)
{ 
    // int i = 3; 
    // printf("Address of i = %u\n", &i); 
    // printf("Value of i = %d\n", i);
    
    // // Syntax:
    // // T* pointer_name;
    // int* j = &i;
    // int *k = &i;
    // printf("Address of j = %u\n", &j); 
    // printf("Value of j = %p\n", j);
    // printf("Value of j = %d\n", *j);
    
    // // ---
    
    // *j = 100;
    // printf("Address of i = %u\n", &i); 
    // printf("Value of i = %d\n", i);

    // printf("Address of j = %u\n", &j); 
    // printf("Value of j = %p\n", j);
    // printf("Value of j = %d\n", *j);
    
    
    // int arr[5] = {10, 20, 30, 40, 50};
    // int kLen = 5;
    // int* ptr = arr;
    
    // for(int i = 0; i < kLen; i++) {
    //     printf("Element %d: %d\t%d\t%d\n", i, *(ptr + i), ptr[i],  arr[i]);
    // }
    // int* ptr2 = arr;
    // printf("Element %d: %d\t%d\n", 0, *ptr2, arr[0]);
    // ptr2++;
    // printf("Element %d: %d\t%d\n", 1, *ptr2, arr[1]);
    
    // int* ptr_name = NULL; // This is how you initilize the pointer to nullptr;
    
    // int* ptr = NULL;
    
    // if(ptr == NULL) {
    //     printf("The pointer ptr is pointing to nullptr. Check your code for bugs.\n");
    // }
    // else {
    //     printf("Do some opertations.\n");
    // }
    
    
    // int* j;
    // printf("Address of j = %p\n", &j); 
    // printf("Value of j = %p\n", j);
    // printf("Value of j = %d\n", *j);
    
    // int* j = NULL;
    // printf("Address of j = %p\n", &j); 
    // printf("Value of j = %p\n", j);
    // printf("Value of j = %d\n", *j);
    
    // free(j);
    
    // int i = 3;
    // int* j = &i;
    // int* l = &j;
    // int* k = &k;
    // int* m = &l;
    // int* n = &m;
    
    
    // int arr[5] = {10, 20, 30, 40, 50}; // Static/compile-time arrays
    
    // int n;
    // printf("enter size: ");
    // scanf("%d", &n);
    
    // int* dynamic_array = (int*) malloc(n * sizeof(int));
    // if(dynamic_array == NULL) {
    //     printf("Unable to allocate memory for your program.\n");
    //     return 1;
    // }
    // printf("Reading values for 1D array of size %d.\n", n);
    // for(int i = 0; i < n; i++) {
    //     printf("value for index %d: ", i);
    //     scanf("%d", &dynamic_array[i]);
    // }
    // printf("\nPrinting values for 1D array of size %d.\n", n);
    // for(int i = 0; i < n; i++) {
    //     printf("value for index %d: %d\n", i, dynamic_array[i]);
    // }

    // free(dynamic_array); // deallocating dynamic_array to not have memory leaks

    // ---
        
    // int arrLen;
    // printf("Size: "); 
    // scanf("%d", &arrLen);
    
    // int* arr = (int*) malloc(arrLen * sizeof(int));
    // if(arr == NULL) {
    //     printf("Unable to allocate memory.\n");
    //     return 1;
    // }
    
    // for(int i = 0; i < arrLen; i++) {
    //     printf("arr[%d] = ", i);
    //     scanf("%d", &arr[i]);
    // }
    
    // printf("Entered arr[Size: %d]: ", arrLen);
    // for(int i = 0; i < arrLen; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
    
    // int divisible_by_5_cnt = 0;
    // for(int i = 0; i < arrLen; i++) {
    //     if(arr[i] % 5 == 0) {
    //         divisible_by_5_cnt++;
    //     }
    // }
    
    // int *divisible_by_5_arr = (int*) malloc(sizeof(int) * divisible_by_5_cnt);
    // if(divisible_by_5_arr == NULL) {
    //     printf("Unable to allocate memory.\n");
    //     return 1;
    // }
    
    // int *not_divisible_by_5_arr = (int*) malloc(sizeof(int) * (arrLen - divisible_by_5_cnt));
    // if(not_divisible_by_5_arr == NULL) {
    //     printf("Unable to allocate memory.\n");
    //     return 1;
    // }
    
    // int divisible_by_5_arr_itr = 0, not_divisible_by_5_arr_itr = 0;
    // for(int i = 0; i < arrLen; i++) {
    //     if(arr[i] % 5 == 0) {
    //         divisible_by_5_arr[divisible_by_5_arr_itr++] = arr[i];
    //     }
    //     else {
    //         not_divisible_by_5_arr[not_divisible_by_5_arr_itr++] = arr[i];
    //     }
    // }

    // printf("divisible_by_5_arr[Size: %d]: ", divisible_by_5_arr_itr);
    // for(int i = 0; i < divisible_by_5_arr_itr; i++) {
    //     printf("%d ", divisible_by_5_arr[i]);
    // }
    // printf("\n");

    // printf("divisible_by_5_arr[Size: %d]: ", not_divisible_by_5_arr_itr);
    // for(int i = 0; i < not_divisible_by_5_arr_itr; i++) {
    //     printf("%d ", not_divisible_by_5_arr[i]);
    // }
    // printf("\n");
    
    int len = 5;
    int kMaxSize = 10;
    int* arr = (int*) malloc(len * sizeof(int));
    if(arr == NULL) {
        printf("Unable to allocate memory.\n");
        return 1;
    }
    int cnt = 0;
    while(1) {
        if((cnt >= kMaxSize)) {
            printf("Max Size reached. Current Size: %d\t| Max Size: %d.\n", cnt, kMaxSize);
            break;
        }
        int temp;
        printf("Insert the value: ");
        scanf("%d", &temp);
        if((temp == -1)) {
            printf("User entered \"-1\". Ending the program.\n");
            break;
        }

        if(cnt >= len) {
            len *= 2;
            
            printf("Allocating the new array of size %d\n", len);
            int* arr2 = (int*) malloc(len * sizeof(int));
            if(arr2 == NULL) {
                printf("Unable to allocate memory.\n");
                return 1;
            }
            printf("Sucessfully increased array size.\n");

            for(int i = 0; i < cnt; i++) {
                arr2[i] = arr[i];
            }
            printf("Sucessfully copied old array to new.\n");

            free(arr);
            printf("Sucessfully freed old array.\n");
            arr = arr2;
        }
        printf("At index %d adding %d.\n", cnt, temp);
        arr[cnt++] = temp;
    }
    printf("\nPrinting values for 1D array of size %d.\n", cnt);
    for(int i = 0; i < cnt; i++) {
        printf("value for index %d: %d\n.", i, arr[i]);
    }
    return 0;
}

