//performing circular  right shift
#include <stdio.h>
void shift(int [],int);
int main()
{
    int a[]={1,2,3,4,5,6},m;
    int n;
    printf("enter no of times and length of array");
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
      shift(a,m);
    }
    for(int i=0;i<6;i++)
    printf("%d\t",a[i]);
    return 0;
}
void shift(int a[],int m)
{
    int temp;
    temp=a[m-1];
    for(int j=m-1;j>0;j--)
    {
        a[j]=a[j-1];
    }
    a[0]=temp;
}