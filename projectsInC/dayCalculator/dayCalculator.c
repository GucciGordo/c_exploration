#include <stdio.h>
#include <math.h>


int DD1; /* Starting day input from user */
int DD2; /* Ending day input from user */
int MM1; /* Starting month */
int MM2; /* Ending month */
int YYYY1; /* Starting year */
int YYYY2; /* Ending year */
int days1; /* Conversion from date to days*/
int days2; /* Conversion from date to days*/
int YD; /* Difference in days */
int MD1; /* Days in a month, depending on specific month for first entry */
int MD2; /* Days in a month, depending on specific month for second entry */
int counter1; /* How many days must we add for leap years based on current date? */
int counter2; /* How many days must we add for leap years based on current date? */
int i1; /* iterator for leap year calculation*/
int i2; /* iterator for leap year calculation*/
int L1 = 0; /* secondary iterator for leap year calc*/
int L2 = 0; /* secondary iterator for leap year calc*/
int LC; /* How many leap years have transpired in your date range? */


int main() 
{
	printf("*************************************************************************************************\n* This program calculates the amount of days that have passed between two dates that you enter. *\n*************************************************************************************************\n\n");
	printf("Please enter the first date (MM/DD/YYYY):");
	scanf_s("%d/%d/%d", &MM1, &DD1, &YYYY1);
	printf("Please enter the second date (MM/DD/YYYY):");
	scanf_s("%d/%d/%d", &MM2, &DD2, &YYYY2);
	if (MM1 >= 2)
	{
		MD1 = 31;
	}
	if (MM1 >= 3)
	{
		MD1 += 28; /* 29 in a leap year */
		if (YYYY1 % 4 == 0) /* If year is divisible by 4...*/
		{
			if ((YYYY1 % 100 != 0) || YYYY1 == 400) /*...but year is not divisible by 100, unless the year is 400*/
			{
				MD1 +=1; /*Add day for leap year*/
				L1 += 1; /* Add a day for current leap year */
			}
		}
	}
	if (MM1 >= 4)
	{
		MD1 += 31;
	}
	if (MM1 >= 5)
	{
		MD1 += 30;
	}
	if (MM1 >= 6)
	{
		MD1 += 31;
	}
	if (MM1 >= 7)
	{
		MD1 += 30;
	}	
	if (MM1 >= 8)
	{
		MD1 += 31;
	}
	if (MM1 >= 9)
	{
		MD1 += 31;
	}
	if (MM1 >= 10)
	{
		MD1 += 30;
	}
	if (MM1 >= 11)
	{
		MD1 += 31;
	}
	if (MM1 >= 12)
	{
		MD1 += 30;
	}
	for (i1 = 0; i1 < YYYY1; ++i1)
	{
		if (i1 % 4 == 0) /* If year is divisible by 4...*/
		{
			if ((i1 % 100 != 0) || i1 == 400) /*...but year is not divisible by 100, unless the year is 400*/
			{
				counter1 += 1; /*Add day for leap year*/
			}
		}
	}
	days1 = (365 * (YYYY1 - 1)) + MD1 + DD1 + counter1; /* Total days since first date. Accounting for leap year */
	//printf(">>>>>>>>>>>>>>>>>>>%d<<<<<<<<<<<<<<<<<<<<<<<", days1); /* debug */
	if (MM2 >= 2)
	{
		MD2 = 31;
	}
	if (MM2 >= 3)
	{
		MD2 += 28; /* 29 in a leap year */
		if (YYYY2 % 4 == 0) /* If year is divisible by 4...*/
		{
			if ((YYYY2 % 100 != 0) || YYYY2 == 400) /*...but year is not divisible by 100, unless the year is 400*/
			{
				MD2 += 1; /* Add day for leap year*/
				L2 += 1; /* Add a day for current leap year */
			}
		}
	}
	if (MM2 >= 4)
	{
		MD2 += 31;
	}
	if (MM2 >= 5)
	{
		MD2 += 30;
	}
	if (MM2 >= 6)
	{
		MD2 += 31;
	}
	if (MM2 >= 7)
	{
		MD2 += 30;
	}
	if (MM2 >= 8)
	{
		MD2 += 31;
	}
	if (MM2 >= 9)
	{
		MD2 += 31;
	}
	if (MM2 >= 10)
	{
		MD2 += 30;
	}
	if (MM2 >= 11)
	{
		MD2 += 31;
	}
	if (MM2 >= 12)
	{
		MD2 += 30;
	}
	for (i2 = 0; i2 < YYYY2; ++i2)
	{
		if (i2 % 4 == 0) /* If year is divisible by 4...*/
		{
			if ((i2 % 100 != 0) || i2 == 400) /*...but year is not divisible by 100, unless the year is 400*/
			{
				counter2 += 1; /*Add day for leap year*/
			}
		}
	}
	days2 = (365 * (YYYY2 - 1)) + MD2 + DD2 + counter2; /* Total days since second date. Accounting for leap year */
	//printf(">>>>>>>>>>>>>>>>>>>>>>>%d<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", days2); /* debug */
	YD = abs(days1 - days2);
	LC = abs(counter1 + L1 - counter2 - L2);
	printf("\nThere are %d days between the dates that you have selected.\n", YD);
	printf("%d leap years have transpired or will have traspired in that period, and %d extra days have been accounted for.\n", LC, LC);

	return 0;
}