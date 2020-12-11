#include<stdio.h>
#include<conio.h>
/*
	4.write a C program to interchange two numbers.
*/
void main()
{
	int a,b;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;

	printf("\nAffter swapping values a=%d b=%d",a,b);
	getch();
}
