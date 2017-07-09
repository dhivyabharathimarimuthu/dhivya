#include<stdioh>
#include<conio.h>
void main()
{
	int day;
	clrscr();
	printf("Enter the day:");
	scanf("%d",&day);
	switch(day)
	{
		case "Monday":
			printf("Monday is a working day:");
			break;
		case "Tuesday":
			printf("Tuesday is a working day");
			break;
		case "Wednesday":
			printf("Wednesday is a working day");
			break;
		case "Thursday":
			printf("Thursday is a working day");
			break;
		case "Friday":
			printf("Friday is a working day");
			break;
		case "Saturday":
			printf("Saturday is a working day");
			break;
		default:
			printf("Sunday is an holiday");
			break;

	}
}