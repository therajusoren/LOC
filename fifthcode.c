#inlude<stdio.h>
void main()
{
    printf("Enter Radius of circle :");
    float r;
    scanf("%f", &r);
    float deameter = 2*r;
    float area = 3.142*r*r;
    float circumference = 2*3.142*r;

    printf("Deameter of circle is : %f", deameter);
    printf("Area of circle is : %f", area);
    printf("Circumference of circle is : %f", circumference);

}