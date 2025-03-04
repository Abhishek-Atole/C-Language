#include<stdio.h>
int main()
{
    char cvalue = 'A';              //char value is of 1 Byte
    int ivalue = 101;               //integar value is of 4 Bytes 
    float fvalue = 29.78f;          //Float value is of 4 Bytes 
                                    //(Here the f letter is written at the end of the value which leads to that float value and if not then this value is treat as the double)
    double dvalue = 30.298566;      //Double value is of 8 Bytes

    printf("%c\n",cvalue);
    printf("%d\n",ivalue);
    printf("%f\n",fvalue);
    printf("%f\n",dvalue);
    return 0;
}