#include <stdio.h>
int rev(int n);
int main()
{
    int n,m;
    printf("enter numb");
    scanf("%d",&n);
    m=rev(n);
printf("%d",m);
    return 0;
}
int rev(int n)
{
   static int rv=0;
   int r=n%10;
   if(n==0)
   {
       return;
   }
   else
   {
       rv=r+rv*10;
       rev(n/10);
   }
   return rv;
   
}