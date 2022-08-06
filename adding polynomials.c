#include <stdio.h>
#include<math.h>
int main()
{
int coeff,max_power;
printf("enter max power");
scanf(" %d",&max_power);

int coef1[max_power],coef2[max_power],add[max_power];
printf("for array 1\n");
for(int i=max_power;i>=0;i--)
{
    printf("enter x to the power %d coefficient of x",i);
    scanf(" %d",&coef1[i]);
}
printf("for array 2");
for(int i=max_power;i>=0;i--)
{
    printf("enter enter x to the power %d coefficient of x",i);
    scanf(" %d",&coef2[i]);
}
for(int i=max_power;i>=0;i--)
{
    add[i]=coef1[i]+coef2[i];
}
printf("added equation is");
for(int i=max_power;i>=0;i--)
{
    printf("%d*x^%d+",add[i],i);
}

}
