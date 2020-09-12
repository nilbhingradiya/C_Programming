//Swap two number without using third variable.

#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter value of a and b :");
  scanf("%d %d",&a,&b);
  printf("Before Swaping:a=%d,b=%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After Swaping: a=%d,b=%d\n",a,b);
}
