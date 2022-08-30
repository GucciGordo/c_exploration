#include <stdio.h>
#include <stdlib.h>
#include <string.h>


double input_value;
double output_value;
char input_unit[100];
char output_unit[100];
char unit[100];

int main()
{
	while (1)
	{
		printf("Imperial to metric converter. The current supported conversions are:\ngallons(gal) -> liters, miles(mi) -> kilometers, yards(yd) -> meters, feet(ft) -> meters, pounds(lb) -> kilograms.\n");
		printf("Please enter the unit (abbreviation) you would like to be converted:");
		/* Begin chunk of stolen code */
		/* if (fgets(input_unit, sizeof(input_unit), stdin))
		{
			char* p;
			if (p = strchr(input_unit, '\n'))
			{//check exist newline
				*p = 0;
			}
			else
			{
				scanf_s("%*[^\n]"); scanf_s("%*c");//clear upto newline
			}
		} */
		/* End chunk of stolen code */
			fgets(input_unit, sizeof(input_unit), stdin); /* Keyboard input for unit (string) */


			input_unit[strcspn(input_unit, "\n")] = '\0'; /* Delete newline character from fgets input for strcmp later */
			if (_strcmpi(input_unit, "Q") == 0) /* Exit loop. Indiscrminate capitalization */
				break;
			printf("Please enter the value:");
			scanf_s("%lf", &input_value); /* Keyboard input for value (long float) */
			/*printf("%lf %s", input_value, input_unit);*/
			if (strcmp(input_unit, "gal") == 0) /* Determine unit input by user */
			{
				output_value = input_value * 3.81; /* Conversion arithmetic */
				strcpy_s(output_unit, sizeof(output_unit), "Liters"); /* Map converted unit to variable output_unit*/
			}
			else if (strcmp(input_unit, "mi") == 0)
			{
				output_value = input_value * 1.61;
				strcpy_s(output_unit, sizeof(output_unit), "Kilometers");
			}
			else if (strcmp(input_unit, "yd") == 0)
			{
				output_value = input_value * 0.91;
				strcpy_s(output_unit, sizeof(output_unit), "Meters");
			}
			else if (strcmp(input_unit, "ft") == 0)
			{
				output_value = input_value * 0.30;
				strcpy_s(output_unit, sizeof(output_unit), "Meters");
			}
			else if (strcmp(input_unit, "lb") == 0)
			{
				output_value = input_value * 0.45;
				strcpy_s(output_unit, sizeof(output_unit), "Kilograms");
			}
		
			printf("\n>>>>>>>>>>%.2lf %s<<<<<<<<<<\n\n", output_value, output_unit); /* Display conversion */
		
	}
	return 0;
}