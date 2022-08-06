#include <stdio.h>
#include<math.h>
int fact(int);
int fact(int x)
{
    int factorial=1;
    for(int i=1;i<=x;i++)
        factorial=factorial*i;
    return factorial;
}
int main()
{
 int t,deg,n;
 float result=0,rad;
 printf("enter the terms which you want to go till last");
 scanf("%d",&n);
 printf("enter the value of x in degree for finding sinx");
 scanf("%d",&deg);
 rad=((3.14/180)*deg);
 t=2*n;
 int i=1,j=1;
 while(i<=t&&j<=n)
    {
    result=result+((pow(-1,(j+1))*pow(rad,i))/fact(i));
    i=i+2;
    j=j+1;
    }
printf("%f",result);
    
}
