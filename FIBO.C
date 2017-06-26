#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=0,b=1,c=0,i;
	clrscr();
	printf("Enter the number to generate fibonacci series:");
	scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
	getch();
}