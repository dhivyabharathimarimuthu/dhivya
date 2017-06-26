#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s=0,i;
	clrscr();
	printf("Enter a positive number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("Sum of %d natural numbers is: %d",n,s);
	getch();
}