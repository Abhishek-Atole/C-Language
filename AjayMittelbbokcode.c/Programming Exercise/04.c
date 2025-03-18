#include<stdio.h>
int main()
{
    float p,roi,t=0;
    float i,Amount=0;
    printf("Enter the Principle Amount :");
    scanf("%f",&p);
    printf("Enter The Rate of interet :");
    scanf("%f",&roi);
    printf("Enter the Time Period :");
    scanf("%f",&t);

    i=p*roi*t/100;
    Amount=p+i;

    printf(" The Interest on the Maturity amount is :%6.2f\n",i);
    printf("The Maturity Amount is : %6.2f ",Amount);
    return 0;

}