//Circumference and area of the circle

#include<stdio.h>
int main()
{
    float r,circumference,area=0;
    printf("Enter the Value of the radius : ");
    scanf("%f",&r);
    circumference=2*22.0/7*r;
    area=22.0/7*r*r;
    printf(" The Value of the Circumference of the circle : %6.2f\n, Print the Area of the Circle : %6.2f",circumference,area);
    return 0;
}