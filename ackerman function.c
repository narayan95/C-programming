//ackerman function using recurrsion
#include<stdio.h>
int ack(int,int);
int main()
{
    int m,n,s;
    printf("enter m and n for finding its ackerman value");
    scanf("%d%d",&m,&n);
    s=ack(m,n);
    printf("%d",s);
}
int ack(int m,int n)
{
    if(m==0)
        return n+1;
    if(m>0&&n==0)
        return ack(m-1,1);
    if(m>0&&n>0)
        return ack(m-1,ack(m,n-1));
}