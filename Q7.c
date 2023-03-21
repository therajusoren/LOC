// 7. Write a program to move all the negative elements to one side of the array.

#include <stdio.h>

void main()
 {
    printf("Enter size of Array : ");
    int size;
    scanf("%d", &size);
    int arr[size];
    // input
    printf("Input Elements in array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    for(int j = 0; j < size; j++){
        for(int i = 1; i < size; i++){
        // if negative element is there in ur array then swap it
        if(arr[i] < 0){
            // swap
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        }
      }
    }
    printf("Elements of array : ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}