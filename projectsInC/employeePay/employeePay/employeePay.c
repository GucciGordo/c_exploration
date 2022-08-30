#include <stdio.h>
#include <math.h>

char line_0[50]; /* Read wage */
char line_1[50]; /* Read hours */
double wage; /* Wage variable */
double hours; /* Hours variable */
double reg_time; /* 40 hours a week */
double ovr_time; /* Time after 40 hours. Double because fmod */
double total_hours; /* Time including over time */
double total_pay; /* Total owed to employee*/

int main()
{
	printf("Enter employee's hourly wage:");
	fgets(line_0, sizeof(line_0), stdin);
	sscanf_s(line_0, "%lf", &wage);
	printf("Enter total hours worked per week:");
	fgets(line_1, sizeof(line_1), stdin);
	sscanf_s(line_1, "%lf", &hours);
	if (hours > 40.0) /* if employee worked more than 40 hours this week */
	{
		reg_time = 40.0000;
		double ovr_time = hours - 40; /* >>>>>>>>>>>>>>>>>>>>>>>>>FMOD NOT HOLDING PRECISION<<<<<<<<<<<<<<<<<<<<<<<<<< */
		total_hours = (reg_time + (ovr_time * 1.5000)); /* using time to find what is owed */
		/* printf("%lf", total_hours);
		printf("%lf", ovr_time); */

	}
	else /* if employee worked less than or equal to 40 hours */
	{
		total_hours = hours;
	}
	total_pay = total_hours * wage;
	printf("\nThe employee made %.2lf$ this week\n.", total_pay); /* display two decimal places because money */
	return 0;
}

