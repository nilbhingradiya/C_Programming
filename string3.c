//Write a program to reverse a string without using strrev().

#include<stdio.h>
void mian()
{
  char s[100],a;
  int i,l=0;
  printf("Enter a string \n");
  gets(s);
  for(i=0;s[i]!='\0';i++)
  l++;
  for(i=0;i<l/2;i++)
  {
    a=s[i];
    s[i]=s[l-1-i];
    s[l-1-i]=a;
  }
  printf("Reverse String :\n");
  puts(s);
}
