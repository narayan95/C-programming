#include <stdio.h>
#include<math.h>
int main()
{
int i,j,temp,p,n,k=0,t=0,power,nums=0,b[20];
printf("enter total number of marios inside castle");
scanf("%d",&n);//taking the input from user
int a[n];
for(int i=0;i<n;i++)
a[i]=i+1;
power=pow(2,t);
while(n%power!=n)
{
    t++;//this no. of times main loop will run
    power=pow(2,t);
}
for(int i=0;i<t;i++)
{
    for(int j=0;j<n;j++){
    if(j%2!=0)
     a[j]=0;}
    for(int j=0;j<n;j++)
    {if(a[n-1]!=0)
    {
        if(a[j]==0){
        for(int k=j;k<n-1;k++)
        {
            a[k]=a[k+1];
        }
        n--;
        }
    
    temp=a[n-1];
    for(int i=n-2;i>=0;i--)
    {a[i+1]=a[i];
    }a[0]=temp;}
    else if(a[n-1]==0)
    {
         if(a[j]==0){
        for(int k=j;k<n-1;k++)
        {
            a[k]=a[k+1];
        }
        n--;
        }
    }
}}
for(int i=0;i<n;i++)
printf("%d\n",a[i]);
}
