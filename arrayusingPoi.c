//Write a program to sort an Array using pointers.

#include<stdio.h>
void main()
{
  int n,i,sum=0,c,r;
  printf("Enter total no.of element in array\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter array elements\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(r=1;r<n;r++)
  {
    for(i=0;i<n-r;i++)
    {
      if((*(a+i))>(*(a+1+i)))
      {
          c=*(a+i);
          *(a+i)=*(a+1+i);
          *(a+1+i)=c;
      }
    }
  }
  ptintf("Array after sorting:\n");
  for(i=0;i<n;i++)
  printf("%d",a[i]);
}
