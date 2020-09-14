//Write a program to find nCr and nPr.

#include<stdio.h>
long fact(int);
long fact_ncr(int,int);
long fact_npr(int,int);
void main()
{
  int n,r;
  long ncr,npr;
  printf("Enter the value of n and r\n");
  scanf("%d %d",&n,&r);
  ncr=fact_ncr(n,r);
  npr=fact_npr(n,r);
  printf(\n"%dC%d=%ld\n",n,r,ncr);
  printf("%dP%d=%ld\n",n,r,npr);
}
long find_ncr(int n.int r)
{
  long result;
  result=fact(n)/(fact(r)*fact(n-r));
  return result;
}
long find_npr(int n.int r)
{
  long result;
  result=fact(n)/fact(n-r);
  return result;
}
long fact(intn)
{
  int c;
  long result=1;
  for(c=1;c<=n;c++)
    result=result*c;
    return result;
}
