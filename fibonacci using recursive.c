//performing recursive function to find nth fibonacci number
#include <stdio.h>
int fibo(int);
int main()
{
    int f,n;
    printf("enter at  which position fibonacci number is to find");
    scanf("%d",&n);
    f=fibo(n);
    printf("%d",f);
}
int fibo(int n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}