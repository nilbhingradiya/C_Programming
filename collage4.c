#include<stdio.h>
#include<conio.h>
/*
	6.write a C program to compute fahrenheit from centigrade
	(f=1.8*c+32)
*/
void main()
{
	float  f,c;
	clrscr();
	printf("enter temperature in celsius:");
	scanf("%f",&c);
	f=(c*1.8)+32;
	printf("\n%.2fcelsius =%.2f Fahrenheit",c,f);

	getch();

}
