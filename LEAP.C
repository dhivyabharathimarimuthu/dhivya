#include<stdio.h>
#include<conio.h>
void main()
{
	int yr;
	clrscr();
	printf("Enter the year:");
	scanf("%d",&yr)
	if(yr%4==0)
	{
		if(yr%100==0)
		{
			if(yr%400==0)
				printf("%d is a leap year",yr);
			else
				printf("%d is not a leap year",yr);
		}
		else
			printf("%d is a leap year",yr);
	}
	else
		printf("%d is not a leap year",yr);
	getch();
}