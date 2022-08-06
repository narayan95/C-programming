#include <stdio.h>

int main()
{
  int r1,r2,c1,c2,i=0,j=0,k=0;
  printf("enter no of rows and columns in first matrix");
  scanf("%d%d",&r1,&c1);
  int a[r1][c1],b[c1][r1],temp=0;
  printf("enter elements in first matrix");
 for(i=0;i<r1;i++)
  {
      for(j=0;j<c1;j++)
  scanf("%d",&a[i][j]);}
  for(i=0;i<r1;i++)
  {
      for(j=0;j<c1;j++)
      {
         
         b[j][i]=a[i][j];
      }}

  for(i=0;i<c1;i++)
  {
      for(j=0;j<r1;j++)
      {
          printf("%d\t",b[i][j]);
      }
      printf("\n");
  }

  
    return 0;
}
