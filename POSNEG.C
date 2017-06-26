#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	if(n>0)
		printf("The number is positive");
	else if(n<0)
		printf("the number is negative");
	else
		printf("the number is Zero");
	getch();
}