#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,dis,root1,root2,real,imaginary;
    printf("enter 3 numbers");
    scanf("%f %f %f",&a,&b,&c);
    dis=(b*b)-(4*a*c);
    if(dis>0)
    {
        root1= ( -b + sqrt(dis)) / (2 * a) ;
        root2 = ( -b - sqrt(dis)) / (2 * a) ;
        printf("root are real and different %f %f",root1,root2);
    }
    else if(dis=0)
    {
        root1 = -b / (2 *a) ;
         root2 = root1;
         printf("root are real and equal %f %f",root1,root2);
    }
    else
    {
         real = -b / (2 * a) ;
        imaginary = sqrt(-dis) / (2 * a);
        printf("root are imaginary %f %f",real,imaginary);

    }
    return 0;
}