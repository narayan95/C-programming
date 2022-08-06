#include <stdio.h>

int main()
{
  int r1,r2,c1,c2,i=0,j=0,k=0;
  printf("enter no of rows and columns in first matrix");
  scanf("%d%d",&r1,&c1);
  printf("enter no of rows and columns in second matrix");
  scanf("%d%d",&r2,&c2);
  int a[r1][c1],b[r2][c2],c[r1][c2];
  printf("enter elements in first matrix");
 for(i=0;i<r1;i++)
  {
      for(j=0;j<c1;j++)
  scanf("%d",&a[i][j]);}
  printf("enter elements in second matrix");
  for(i=0;i<r2;i++)
  {
      for(j=0;j<c2;j++)
  scanf("%d",&b[i][j]);}
  if(c1==r2)
  {
   for(i=0;i<r1;i++)
   {
       for(j=0;j<c2;j++)
       {
           c[i][j]=0;
           for(k=0;k<c1;k++)
       {
           c[i][j]=c[i][j]+a[i][k]*b[k][j];
       }
       }
   }
  for(i=0;i<r1;i++)
  {
      for(j=0;j<c2;j++)
      {
          printf("%d\t",c[i][j]);
      }
      printf("\n");
  }
      
  }
  else
  printf("matrix multiplication cant be performed");

    return 0;
}
