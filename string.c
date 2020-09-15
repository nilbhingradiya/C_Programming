//Write a program to compare two string without using strcmp().

#include<stdio.h>
//case sensitive
int stringCmp(char *s1,char *s2);
void main()
{
  char str1[100],str2[100];
  printf("Enter string 1:");
  gets(str1);
  printf("Enter string 2:");
  gets(str2);
  if(!stringCmp(str1,str2))
    printf("\nString are same.");
  else
    printf("\nString are not same.");
}
int stringCmp(char *s1,char *s2)
{
  int i=0;
  for(i=0;s1[i]!='\0';i++)
  {
      if(s1[i]!=s2[i])
        return 1;
  }
  return 0;
}
