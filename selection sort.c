#include <stdio.h>

int main()
{
    int t,num, n;
    printf("enter  number");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {if(a[i]>a[j])
       {
           t=a[i];
           a[i]=a[j];
           a[j]=t;
       }
       }
   }
   printf("\n 2nd largest number is");
   printf("%d,",a[n]);
    return 0;
}
