#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,min,max;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		max=a[i][0];
		for(j=0;j<3;j++)
		{
			if(max<a[j][i])
			max=a[j][i];
		}
		printf("max=%d\t",max);
	}
	getch();
}