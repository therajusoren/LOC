#include<stdio.h>
void main()
{
    int num1, num2, num3, ans; 
    float num4;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    printf(" For summation type (1)\nFor subtraction type (2) \nFor multiplication type (3)\nFor division type (4) \n");
    printf("Which operation you want to do : ");
    scanf("%d",&ans);
    switch(ans)
    {
        case 1:
        int sum = num1 + num2;
        printf("Sum of these numbers :%d",sum);
        break;
        case 2:
        int dif = num1 - num2;
        printf("Substraction of these numbers : %d",dif);
        break;
        case 3:
        int mul = num1 * num2;
        printf("Multiplication of these numbers : %d",mul);
        break;
        case 4:
        float div = num1 / num2;
        printf("Division of these numbers :%f",div);
        break;
    }
    printf("\nThank you");
    return 0;
}