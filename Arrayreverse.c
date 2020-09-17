//Write a program to reverse a array.

#include<stdio.h>
void main()
{
  int n,i,b;
  printf("How many elements you want in array\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter array elements\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n/2;i++)
  {
    b=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=b;
  }
  printf("Reverse Array:\n");
  for(i=0;i<n;i++)
  printf("%d",a[i]);
}
