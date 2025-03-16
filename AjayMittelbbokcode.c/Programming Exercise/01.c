//print temperature form Farenheit to celcius
#include<stdio.h>
int main()
{
    float c , f=0;
    printf("Enter the Temperature in Farenheit: ");
    scanf("%f",&f);
    c=5.0/9.0*(f-32);
    printf("The Value of the Temperature In celcius :%6.2f\n",c);
    return 0;
}