#include <stdio.h>

int number_change;
int number_pennies;
int number_nickles;
int number_dimes;
int number_quarters;
char line[50];

int main() {
	while (1)
	{
		printf("Enter 0 to exit\n");
		printf("Enter the amount of change you have (less than one dollar):");
		fgets(line, sizeof(line), stdin);
		scanf(line, "%d", &number_change);
		if (number_change == 0)
			break;
		if (number_change < 0 || (number_change > 100))
		{
		printf("\nInvalid entry. Please try again.\n");
		continue;
	    }
		number_quarters = number_change / 25; /* integer division*/
		number_dimes = (number_change - number_quarters * 25) / 10; /* must account for the value of the quarters times number of quarters*/
		number_nickles = (number_change - number_quarters * 25 - number_dimes * 10) / 5;
		number_pennies = (number_change - number_quarters * 25 - number_dimes * 10 - number_nickles * 5);
		printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$ Your change requires %d quarters, %d dimes, %d nickels, and %d pennies $$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n", number_quarters, number_dimes, number_nickles, number_pennies);
	}
	return 0;
}
