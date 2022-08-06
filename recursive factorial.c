//performing recursive function to find factorial of a number
#include <stdio.h>
int fact(int);
int main()
{
    int f,n;
    printf("enter the number whose factorial is to find");
    scanf("%d",&n);
    f=fact(n);
    printf("%d",f);
}
int fact(int n)
{
    if(n>1)
    return n*fact(n-1);
    else
    return 1;
}