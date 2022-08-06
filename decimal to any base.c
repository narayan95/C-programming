//converting decimal to any base
#include <stdio.h>
#include<math.h>
int main()
{
int n,i=0,a[20],b,p;
printf("enter the number in decimal form");
scanf("%d",&n);
printf("to which base it be converted to");
scanf("%d",&b);
while(n>0)
{
    p=n%b;
    a[i]=p;
    i++;
    n=n/b;
}
if(b==16)
{
    for(int j=i-1;j>=0;j--)
    {
        switch(a[j])
        {
            case 10:printf("a");
                break;
            case 11:printf("b");
                break;
            case 12:printf("c");
                break;
            case 13:printf("d");
                break;
            case 14:printf("e");
                break;
            case 15:printf("f");
                break;
            case 16:printf("g");
                break;
            default:printf("%d\t",a[j]);
        }
    }
}
else
{
     for(int j=i-1;j>=0;j--)
     printf("%d",a[j]);
}
}
