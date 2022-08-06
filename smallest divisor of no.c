#include<stdio.h>
//program to find the smallest divisor of a number
int main()
{
    int n,sd;
    printf("enter number");
    scanf("%d",&n);
    if(n%2==0)
        sd=2;
    else{
        for(int i=3;i<n/2;i=i+2)
            {
                if(n%i==0)
                {
                    sd=i;
                    break;
                }
                else
                    sd=1;
            }
    }
    printf("%d",sd);
}


