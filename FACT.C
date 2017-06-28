#include<stdio.h>
#include<conio.h>
void main()
{
	int f=1,n,i;
	clrscr();
	printf("Enter the number to find factorial:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("The factorial of %d is: %d",n,f);
	getch();
}