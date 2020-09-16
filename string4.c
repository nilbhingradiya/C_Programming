//Write a program to concatenate two string without using strcat().

#include<stdio.h>
{
  char str1[50],str2[50],i,j;
  printf("Enter first string:");
  gets(str1);
  printf("Enter second string:");
  gets(str2);
  for(i=0;str1[i]!='\0';++i);
  for(j=0,str2[j]!='\0';++j,++i)
  {
    str1[i]=str2[j];
  }
  str1[i]='';
  printf("Output:%s",str1);
}
