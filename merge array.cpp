#include<stdio.h>

int
main ()
{
  int n,t,temp, m;
  printf ("enter n and m");
  scanf ("%d%d", &n, &m);
  int a[n], b[m];
  t = n + m;
  int c[t];
  printf ("enter elements of firat matrix");
  for (int i = 0; i < n; i++)
      scanf ("%d", &a[i]);
      printf("enter elements of second matrix");
for(int i=0;i<m;i++)
scanf("%d",&b[i]);
    for(int i=0; i<n;i++){
    c[i]=a[i];}
    for(int i=n;i<t;i++){
    c[i]=b[i-n];}
    for(int i=0;i<t-1;i++)
    {
        for(int j=i+1;j<t;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    for(int i=0;i<t;i++)
printf("%d\t",c[i]);

}
