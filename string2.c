//Write a program to copy string without using strcpy().

#include<stdio.h>
void stringCpy(char* s1,char* s2)
void main()
{
  char str1[100],str2[100];
  printf("Enter string 1:");
  gets(str1);
  stringCpy(str2,str1);
  printf("String 1:%s\n String 2:%s\n",str1,str2);
}
void stringCpy(char* s1,char* s2)
{
  int i=0;
  while(s2[i]!='\0')
  {
    s1[i]=s2[i];
    i++;
  }
  s1[i]='\0';
}
