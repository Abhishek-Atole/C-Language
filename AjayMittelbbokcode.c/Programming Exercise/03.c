#include<stdio.h>
int main()
{
    int no1,no2,no3,avg=0;
    printf("Enter the Value  for no1,no2,no3 : ");
    scanf("%d %d %d",&no1,&no2,&no3);
    avg=(no1+no2+no3)/3;
    printf("The Average Value of the Three Nubers are : %d ",avg);
    return 0;
}