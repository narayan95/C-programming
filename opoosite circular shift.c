//code for doing circular shift
#include <stdio.h>
int main()
{
    int n,num,temp=0;
    printf("enter lenghth of array");
    scanf("%d",&n);
    int a[n];
    printf("enater elements of array");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter no of times shifting has to be done");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
       temp=a[0];
        for(int j=0;j<n-1;j++){
        a[j]=a[j+1];}
        a[n-1]=temp;
    }
    for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
}
    