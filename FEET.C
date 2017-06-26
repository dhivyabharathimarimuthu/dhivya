#include<stdio.h>
#include<conio.h>
int main()
{
	int ft,in;
	clrscr();
	printf("Enter the feets:");
	scanf("%d",&ft);
	in=ft*12;
	printf("Inches: %d",in);
	getch();
	return 0;
}