//finding strong no
#include <stdio.h>
int fact(int);
int main()
{
    int a,f,c,sum=0,copy;
    printf("enter numbers");
    scanf("%d",&a);
    copy=a;
    while(a>0)
    {
        c=a%10;
        sum=sum+fact(c);//no whose each digit factorial sum = number itself is called strong no.
        a=a/10;
    }
    if(sum==copy)
    printf("strong no");
    else
    printf("not strong");
}
int fact(int x)
{
    int sum=1;
    for(int i=1;i<=x;i++)
    sum=sum*i;
    return sum;
}