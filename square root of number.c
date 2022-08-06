#include<stdio.h>
//program to find the square root of a number
int main()
{
    float a,c,b;
    int n;
    printf("enter number whose square root is to find\n");
    scanf("%d",&n);
    a=n;                                                //a is the assumed square root of b
    b=a*a;                                              // b is the square of a.
    while(b-n>0.00001)                                  //difference between the expected sqare of number should not be less than 0.00001
    {
        c=(a+(n/a))/2;                                  //taking average of  assumed no and its counterpart(obtain by dividig assumed by number)
        a=c;
        b=a*a;
    }
    printf("%f",a);
}


