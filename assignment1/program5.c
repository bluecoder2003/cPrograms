#include<stdio.h>
int main()
{
    float pmr,cr,c,e;
    printf("enter previous meter reading and current reading");
    scanf("%f %f",&pmr,&cr);
    c=cr-pmr;
    e=c*3.75;
    printf("%f",e);
    return 0;
}