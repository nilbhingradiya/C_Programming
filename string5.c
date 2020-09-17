//Write a program to delete vowels from a string.

#include<stdio.H>
void main()
{
  char s[100],a[100];
  int i,j=0;printf("Enter a string\n");
  gets(s);
  for(i=0;s[i]!='';i++)
  {
    switch(s[i])
    {
      case'a':break; case'A':break;
       case'e':break; case'E':break;
        case'i':break; case'I':break;
         case'o':break; case'O':break;
          case'u':break; case'U':break;
          default;
          a[j]=s[i];
          j++;
    }
  }
  a[j]='';
  printf("String without vowels:\n");
  puts(a);
}
