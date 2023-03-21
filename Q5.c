// 5. Write a C program to copy the elements of one array into another array.

#include <stdio.h>

void main()
{
printf("Enter the size of array : ");
int size;
scanf("%d", &size);
int arr1[size];
int arr2[size];
// input the elements of arr1
printf("Enter elements of size : ");
for(int i = 0; i < size; i++){
    scanf("%d", &arr1[i]);
}
    // Copy elements of arr1 into arr2
    for (int i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }
    // Print elements of arr2
    printf("Elements of arr2: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
}