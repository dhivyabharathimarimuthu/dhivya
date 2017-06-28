#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
		printf("%d is greater than %d and %d",a,b,c);
	else if(b>c && b>a)
		printf("%d is greater than %d and %d",b,a,c);
	else
		printf("%d is greater than %d and %d",c,a,b);
	getch();
}