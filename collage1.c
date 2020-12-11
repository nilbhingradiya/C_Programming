#include<stdio.h>
#include<conio.h>
/*
	11:write a C program to check whether the entered
	 character is capital,small letter ,digit or any special
	 character.
*/
void main()
{
	char ch;
	clrscr();
	printf("\nenter Any character :");
	scanf("%c",&ch);
	if(ch>='0'&&ch<='9')
	{
		printf("\nenterd character is digit");
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("\nEnterd character is capital letter ");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("\nEnterd character is small letter");
	}
	else
	{
		printf("\nenterd character is special character");
	}
	getch();

}
