#include<Stdio.h>
int main()
{
    char c ='A';
    int i=11;
    float f=90.99f;
    double d=90.88;

    char *cp=&c;
    int *ip=&i;
    float *fp=&f;
    double *dp=&d;

    printf("%c\n",*cp);
    printf("%d\n",*ip);
    printf("%f\n",*fp);
    printf("%f\n",*dp);

    printf("\n%d\n",cp);
    printf("%d\n",ip);
    printf("%d\n",fp);
    printf("%d\n",dp);

    void *vp=NULL;
    vp=&c;
    printf("\n%c\n",*(char*)vp);
    vp=&i;
    printf("%d\n",*(int*)vp);
    vp=&f;
    printf("%f\n",*(float*)vp);
    vp=&d;
    printf("%f\n",*(double*)vp);  
    


    return 0;

}