// 3. Write a program to sort a given array using function.

#include <stdio.h>
void sortArray(int arr[], int size);
void main(){
    printf("Enter the size of your array : ");
    int size;
    scanf("%d", &size);
    int array[size];

// input
printf("Input element in your array : ");
for(int i = 0; i < size; i++){
    scanf("%d", &array[i]);
}
sortArray(array, size);
for(int i = 0; i < size; i++){
    printf("%d ", array[i]);
}
}
void sortArray(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
