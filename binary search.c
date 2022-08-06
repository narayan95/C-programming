#include<stdio.h>
int main()
{
    int n,temp=0,num,low,high,mid;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    //reading array numbers
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    //starting selection sort
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
if(a[i]>a[j])
{
    temp=a[j];
    a[j]=a[i];
    a[i]=temp;
}}//selection sort complete
printf("enter number which needs to be find");
scanf("%d",&num);
    //starting binary search
low=0;
high=n-1;
while(low<=high)
{
    mid=(low+high)/2;
    if(num<a[mid])
high=mid-1;
else if(num>a[mid])
low=mid+1;
else if(num==a[mid])
{
    printf("location is %d",mid+1);
    break;
}
}

}
 