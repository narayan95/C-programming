#include <stdio.h>

int main()
{
int a[6]={-1,2,1,-1,3,2};
int new[6];
for(int i=0;i<6;i++)
{
    for(int j=i+1;j<6;j++)
    {
        if(a[i]==a[j])
        {
            new[j]=-1;
        }
    }
}
for(int i=0;i<6;i++)
if(new[i]!=-1)
{
    printf("%d",a[i]);
}
    return 0;
}
