/**************************************************
* A program the sums 3 integers input by the user *
* Author: Gordon Foley                            *
* Purpose: learning C                             *
***************************************************/
#include <stdio.h>
/* Use the standard IO package.*/
int main() {
	/* initialize the float variables */
	float a, b, c, d;

	/* display an input prompt for the user */
	printf("Enter three numbers to add, seperated by single spaces, then hit return:\n");

	/* Looks for 3 individual floats seperated by spaces input from the user. 
	These 3 floats are then mapped to the variables a, b and d */
	scanf_s("%f%f%f", &a, &b, &d);

	/* Arithmetic to be carried out by computer. Variable c is assigned the value of the sum of a, b, and d. */
	c = a + b + d;

	/* Print results to user. Float with 2 decimal places is returned. Seems to round up. */
	printf("Sum of the three numbers = %.2f\n", c);

	/* Return 0 if no errors. Higher the number = worse the error. */
	return 0;

}