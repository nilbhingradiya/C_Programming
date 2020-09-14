//Write a program to check thet given year is leap year or not.

#include<stdio.h>
void main()
{
  int year;
  printf("Enter a year to check if it is a leap year\n");
  scanf("%d",&year);
  if(year%400==0)
    printf("%d is a leap year.\n",year);
  else if(year%100==0)
    printf("%d is not a leapyear.\n",year);
  else if(year%4==0)
    print("%d is a leap year.\n",year);
  else
    printf("%d is not a leap year.\n",year);
}
