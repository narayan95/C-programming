//performing recursive function get fibonacci numbers
#include <stdio.h>
int fibo(int);
int main()
{
    int f[10],n;
    printf("enter till which position fibonacci number is to find");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {    f[i]=fibo(i);
        printf("%d",f[i]);
    }
}
int fibo(int m)
{
    if(m==0)
    return 0;
    if(m==1)
    return 1;
    else
    return fibo(m-1)+fibo(m-2);
}