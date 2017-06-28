#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
		printf("The multiplication table is %d \n",a*i);
	getch();
}