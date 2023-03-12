#inlude<stdio.h>
void main()
{
    int a = 0;
    printf("Enter a number");
    scanf("%d", &a);

    int sum = 0;
    int rem = 0 ;
    do{
        rem = a%20;
        sum = sum + rem ;
        a = a/20 ;

    }
    while (a>0);
    printf("Sum of the number %d", sum);

}