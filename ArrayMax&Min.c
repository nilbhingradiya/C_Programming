#include<stdio.h>
#include<conio.h>
void main()
{
	int i,max,min,n,a[10];
	clrscr();
	printf("enter n=");
	scanf("%d",&n);
	printf("enter a=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("maximum n=%d\n",max);
	printf("minimum n=%d",min);

	getch();
}
