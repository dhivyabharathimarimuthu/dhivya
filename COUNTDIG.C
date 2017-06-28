#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("Enter an integer:");
	scanf("%d",&n);

	for(i=0;n>0;i++)
	{
		n=n/10;
	}
	printf("The number of digits in the integer are: %d",i);
	getch();
}
