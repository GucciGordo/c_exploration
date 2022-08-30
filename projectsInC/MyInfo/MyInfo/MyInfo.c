/************************************************************
 * A Program that prints my name, my social security number,*
 * and my date of birth                                     *
 ************************************************************/

#include <stdio.h>
/* Declaring a string requires one to intialize the required space for the string */
char name[13] = "Gordon Foley";
int soc0;
int soc1;
int soc2;
int dob0;
int dob1;
int dob2;

int main()
{
	soc0 = 123;
	soc1 = 45;
	soc2 = 6789;
	dob0 = 10;
	dob1 = 04;
	dob2 = 1994;
	/* %s must be used for string conversion specification, while %d is used for integers, and %f for floats*/
	printf("Name: \n %s\n", name);
	/* - can be inserted between integer conversion specification without issue*/
	printf("Social Security Number: \n %d-%d-%d\n", soc0, soc1, soc2);
	printf("Date of Birth: \n %d-%d-%d \n", dob0, dob1, dob2);

	return(0);
}