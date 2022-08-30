#include <stdio.h>
#include <string.h>


double input_value;
double output_value;
char input_unit[100];
char output_unit[100];
char unit[100];

int main()
{

	printf("Imperial to metric converter. The current supported conversions are:\ngallons(gal) -> liters, miles(mi) -> kilometers, yards(yd) -> meters, feet(ft) -> meters, pounds(lb) -> kilograms.\n");
	printf("Please enter the unit (abbreviation) you would like to be converted:");
	fgets(input_unit, sizeof(input_unit), stdin);
	printf("Please enter the value:");
	scanf_s("%lf", &input_value);
	printf("%f %s", input_value, input_unit);
	if (strcmp(input_unit, "gal") == 0)
	{
		output_value = input_value * 3.81;
		strcpy_s(output_unit, sizeof(output_unit), "Liters");
	}
	else if (strcmp(input_unit, "mi") == 0)
	{
		output_value = input_value * 1.61;
		strcpy_s(output_unit, sizeof(output_unit), "Kilometers");
	}
	printf("%f %s", output_value, output_unit);
	return 0;
}