//Write a Program to check whether number is prime or not.


#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter a number\n");
  scanf("%d",&a);
  for(b=2;b<a;b++)
  if(a%b==0)
  break;
  printf("Number is prime");
  else
  printf("Number is not prime");
}
