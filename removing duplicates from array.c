#include<stdio.h>
int main()
{
    int n,temp=0;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            while(a[i]==a[j]&&j<n)
            {
            for(int k=j;k<n-1;k++)
                a[k]=a[k+1];
                temp=1;
                n--;
        
            
            }
        }
    }
for(int i=0;i<n;i++)
printf("%d\t",a[i]);
}