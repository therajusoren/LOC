// 6. Write a program to find maximum occurring integer in an array.

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
    int repeat;
    int num = 0; int element;
    for(int i = 0; i < size; i++){
        repeat = 0;
        int target = arr[i];
        for(int j = 0; j < size; j++){
            if(target == arr[j]){
                repeat++;
            }
        }
        if(num < repeat){
            num = repeat;
            element = target;
        }
    }
    printf("Maximum occuring integer in your array is %d",element);
}