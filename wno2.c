//Write a program to check whether number is plindrome or not.

#include<stdio.h>
void main()
{
  int a,b,c=0;
  printf("Enter a number\n");
  scanf("%d",&a);
  b=a;
  while(a!=0)
  {
      c=c*10+a%10;
      a=a/10;
  }
  if(b==c)
    printf("Number is palindrome");
    else
    printf("Number is not palindrome\n");
}
