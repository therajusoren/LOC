#include<stdio.h>
void main()
{
    printf("Enter 1st Number : ");
    int num1;
    scanf("%d",&num1);
    printf("Enter 2nd Number : ");
    int num2;
    scanf("%d",&num2);
    printf("Which operation you want to do : ");
    int ans;
    scanf("%d",&ans);
    switch(ans)
    {
        case 1 :
        int sum = num1 + num2;
        printf("Sum of these numbers %d", sum);
        break;
        case 2 :
        int sub = num1 - num2;
        printf("Substraction of these numbers %d", sub);
        break;
        case 3 :
        int mul = num1 * num2 ;
        printf("Multiplication of these numbers %d", mul);
        break;
        case 4:
        int div = num1 / num2 ;
        printf("Division of these to numbers %d", div);
        break;
    }

}

}