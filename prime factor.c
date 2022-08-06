//to find prime factors of given number
#include <stdio.h>
int main()
{
 int num,a[20],i=2,k=0;
 printf("enter number");
 scanf("%d",&num);
 while(num!=1)
 {
     while(num%i==0)
     {
         a[k++]=i;
         num=num/i;
     }
     i++;
 }
 for(int j=0;j<k;j++)
 printf("%d\t",a[j]);
}
