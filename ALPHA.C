#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	printf("Enter any character:");
	scanf("%c",&c);
	if((c>='A' && c<='Z')||(c>='a' && c<='z'))
		printf("The character is an alphabet");
	else
		printf("The character is not an alphabet");
	getch();
}