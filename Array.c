#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n;
	clrscr();

	printf("enter a[%d]=",i);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n[%d]=%d",i,a[i]);
	}
	getch();
}
