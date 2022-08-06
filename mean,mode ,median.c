#include <stdio.h>
#include<stdlib.h>
#include<math.h>
float mean(int a[],int n);
float median(int a[],int n);
int mode(int a[],int n);
int main()
{
  int n;
  printf("enter the lenght of array");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements of array");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("%f\n",mean(a,n));
   printf("%f\n",median(a,n));
   printf("%d",mode(a,n));
}
float mean(int a[],int n)
{
    float mean;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    mean=sum/n;
    return mean;
}
float median(int a[],int n)
{
    int m1,m2;
    float median,avg;
    if(n%2!=0)
    {
        median=a[n/2];
        return median;
    }
    else
    {
       m1=n/2;
       m2=(n-2)/2;
       median=(a[m1]+a[m2])/2.0;
        return median;
    }
}
int mode(int a[],int n)
{
    int count=0,max=0,mode1;
    for(int i=0;i<n-1;i++)
    {
          count=0;
        for(int j=i+1;j<n;j++)
        {
          
            if (a[i]==a[j])
                count++;
        }
        if(count>max)
        {   max=count;
            mode1=a[i];
        }
    }
    return mode1;
}