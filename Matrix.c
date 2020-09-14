//Write a program to find transpose of a matrix.

#include<stdio.h>
void main()
{
  int n,m,i,j,s=0;
  printf("Enter the order of matrix\n");
  scanf("%d %d",&n,&m");
  int a[n][m];
  printf("Enter elements of matrix\n");
  for(i=0;i<n;i++)
  for(j=0;j<m;j++)
    scanf("%d",&a[i][j]);
  printf("Transpose of matrix\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d",a[i][j]);
    }
    printf("\n");
  }
}
