//Write a program to generate Armstrong number.

#include<stdio.h>
void main()
{ 
  int r;
  long int number=0,c,sum=0,temp;
  printf("Enter an integer upto which you want to find armstrong numbers\n");
  scanf("%ld",&number);
  printf("Following armstrong numbers are found from 1 to %ld\n",number);
  for(c=1;c<=number;c++)
  {
      temp=c;
      while(temp!=0)
      {
          r=temp%10;
          sum=sum+r*r*r;
          temp=temp/10;
      }
      if(c==sum)
      printf("%ld\n",c);
      sum=0;
  }
}
