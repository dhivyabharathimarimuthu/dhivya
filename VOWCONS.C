#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	printf("Enter any character:");
	scanf("%c",&c);
	if((c=='A'||c=='E'||c=='I'||c=='O'||c=='U')||(c=='a'||c=='e'||c=='e'||c=='i'||c=='o'||c=='u'))
		printf("The character is a vowel");
	else
		printf("The character is a consonant");
	getch();
}