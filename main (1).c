#include<stdio.h>
int main()
{
    int i=0,n1,n2,a[10],b[10],j=0;
    printf("enter numbers");
    scanf("%d%d",&n1,&n2);
    while(n1%2==0||n1!=1)
    {
        a[i]=2;
        n1=n1/2;
    }
    while(n2%2==0||n2!=1)
    {
        b[j]=2;
        n2=n2/2;
    }
    int k=3;
    while(n1!=1)
    {
        if((n1%k)==0)
        {
            n1=n1/i;
            a[i++]=k;
        }
        k++;
    }
    k=3;
    while(n2!=1)
    {
        if((n2%k)==0)
        {
            
            n2=n2/j;
            b[j++]=k;
        }
        k++;
    }
    for(int p=0;p<i;p++)
    printf("%d\t",a[p]);
    printf("\n");
    for(int p=0;p<j;p++)
    printf("%d\t",b[p]);
    
}