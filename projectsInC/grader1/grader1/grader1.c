#include <stdio.h>
#include <string.h>

int numeric_grade[3];
char letter_grade[3];
char line[50];

int main() {
	printf("Enter a numeric grade:\n");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &numeric_grade);
	if ((numeric_grade[1] == 8 || numeric_grade[1] == 9 || numeric_grade[1] == 0) && numeric_grade > 60)
	{
		letter_grade[2] = "+";
	}
	else if (numeric_grade[1] == 4 || numeric_grade[1] == 5 || numeric_grade[1] == 6 || numeric_grade[1] == 7)
	{
		letter_grade[2] = " ";
	}
	else
	{
		letter_grade[2] = "-";
	}
	printf("%s", letter_grade);
	return 0;
}
