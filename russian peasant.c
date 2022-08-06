#include <stdio.h>

int
main ()
{
 int i=1,num1,num2,p,a[20],b[20],k=1;
 printf("enter number 1 and 2 to multiply");//by russian peasant method
 scanf("%d%d",&num1,&num2);    
    a[0]=num1;
    b[0]=num2;
    while(num1!=1)
{
    num1=num1/2;
    num2=num2*2;
    a[i]=num1;
    b[i]=num2;
    i++;
}
for(int j=0;j<i;j++)

    printf("\n%d , %d",a[j],b[j]);

  return 0;
}
