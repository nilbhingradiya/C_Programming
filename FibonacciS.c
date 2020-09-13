//Write  a program to print Fibonacci series.

//Using Iteration

#include<stdio.h>
void main()
{
    int n,i,a=0,b=1,c=0;
    printf("Enter the number of terms you want to see in fibonacci series\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf("%d",c);
    }
}
