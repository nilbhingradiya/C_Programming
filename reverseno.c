//Write a program to reverse  number.

#include<stdio.h>
void main()
{
  int a,c=0;
  printf("Enter a number\n");
  scanf("%d",&a);
  while(a!=0)
  {
      c=c*10+a%10;
      a=a/10;
  }
  printf("Reverse Number:%d",c);
}
