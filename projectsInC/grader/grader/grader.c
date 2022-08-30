#include <stdio.h>

int numeric_grade;
char line[50];

int main() {
	printf("Enter a numeric grade:\n");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &numeric_grade);
	if (numeric_grade >= 98)
	{
		printf("Your grade is an A+.");
		return 0;
	}
	else if (numeric_grade >= 94)
	{
		printf("Your grade is an A.");
		return 0;
	}
	else if (numeric_grade >= 90)
	{
		printf("Your grade is an A-.");
		return 0;
	}
	else if (numeric_grade >= 88)
	{
		printf("Your grade is a B+.");
		return 0;
	}
	else if (numeric_grade >= 84)
	{
		printf("Your grade is a B.");
		return 0;
	}
	else if (numeric_grade >= 81)
	{
		printf("Your grade is a B-.");
		return 0;
	}
	else if (numeric_grade >= 78)
	{
		printf("Your grade is a C+.");
		return 0;
	}
	else if (numeric_grade >= 74)
	{
		printf("Your grade is a C.");
		return 0;
	}
	else if (numeric_grade >= 71)
	{
		printf("Your grade is a C-.");
		return 0;
	}
	else if (numeric_grade >= 68)
	{
		printf("Your grade is a D+.");
		return 0;
	}
	else if (numeric_grade >= 64)
	{
		printf("Your grade is a D.");
		return 0;
	}
	else if (numeric_grade >= 61)
	{
		printf("Your grade is a D-.");
		return 0;
	}
	else
	{
		printf("Your grade is an F.");
		return 0;
	}
}