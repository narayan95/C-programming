#include<math.h>//converting binary to decimal
#include <stdio.h>
int main()
{
int n,i=0,a[20],b,p,ans=0;
printf("enter the number in binary form");
scanf("%d",&n);
while(n!=0)
{
    a[i]=n%10;
    ans=ans+a[i]*pow(2,i);
    n=n/10;
    i++;
}
printf("%d",ans);
}
