#include<stdio.h>
#include<conio.h>
/*
	5.write C program to enter a distance in to kilometer and
	convert it in to meter ,feet,inches and centimeter
*/
void main()
{
	float  km;
	clrscr();
	printf("enter langth in kilometer :");
	scanf("%f",&km);
	printf("\n%2.f km =%2.fmeters",km,km*1000);
	printf("\n%2.f km =%2.ffeets",km,km*3280.84);
	printf("\n%2.f km =%2.finches",km,km*39370.08);
	printf("\n%2.f km =%2.\fCentimeter",km,km*1000*100);
	getch();
}
