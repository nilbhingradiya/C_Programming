//Write a program to find HCF and LCM of two number.

#include<stdio.h>
int gcd(int,int);
void main()
{
  int x,y,hcf,lcm;
  printf("Enter two integers\n");
  scanf("%d %d",&x,&y);
  hcf=gcd(x,y);
  lcm=(x*y)/hcf;
  printf("HCF is %d\n",hcf);
  printf("LCM is %d\n",lcm);
}
int gcd(int x,int y)
{
  if(x==0)
    return y;
  while(y!=0)
  {
    if(x>y)
    x=x-y;
    else
    y=y-x;
  }
  return x;
}
