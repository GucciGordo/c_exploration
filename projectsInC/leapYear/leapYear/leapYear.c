#include <stdio.h>

char line[50];
int year;

int main()
{
	printf("Enter a year:");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line,"%d", &year);
	if (year % 4 == 0) /* If year is divisible by 4...*/
	{
		if ((year % 100 != 0) || year == 400) /*...but year is not divisible by 100, unless the year is 400*/
		{
			printf("Leap Year!");
			return 0;
		}

		else
		{
			printf("Not a Leap Year :(");
			return 0;
		}
	}
	else
	{
		printf("Not a Leap Year :(");
			return 0;
	}
}