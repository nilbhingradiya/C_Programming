//  Add two numbers using command line argument.

#include<stdio.h>
void main(int argc,char*argv[])
{
  int i,sum=0;
  if(argc!=3)
  {
    printf("You have forgot to type numbers :");
    exit(1);
  }
  printf("The sum is:");
  for(i=1;i<argc;i++)
  sum=sum+atoi(argv[i]);
  printf("%d",sum);
}
