#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%2==0)
		printf("Even");
	else
		printf("Odd");
	getch();
	return 0;
}
