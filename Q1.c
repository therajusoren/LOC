// Q1. Write a program to count the number of occurrences of a number in an array using function.

#include <stdio.h>
int repeat(int arr[], int target, int size);
void main(){
printf("Enter size of your 1st Array : ");
int size;
scanf("%d", &size);
int arr[size];
printf("Input elements in your array : ");
for(int i = 0; i < size; i++){
  scanf("%d", &arr[i]);
}
printf("Enter target Number : ");
int target;
scanf("%d", &target);
int ans = repeat(arr, target,size);
printf("Occurences of %d in your array is %d ", target, ans);
}
int repeat(int arr[], int target, int size){
    int sum = 0;
for(int i = 0; i < size; i++){
    if(arr[i] == target){
        sum++;
    }
}return sum;
}

