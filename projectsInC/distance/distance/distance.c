/********************************************************************************************************************************
* This program computes the euclidean distance between two points in three dimensional space.                                   *
* The result is accurate to two decimal places.                                                                                 *
********************************************************************************************************************************/

#include <stdio.h>
#include <math.h>

float x_first; /* x coord of first point*/
float y_first; /* y coord of first point*/
float z_first; /* z coord of first point*/
float x_second; /* y coord of second point*/
float y_second; /* y coord of second point*/
float z_second; /* z coord of second point*/
double x_third; /* distance between x coords. Double is used because abs (or fabs) requires a double type*/
double y_third; /* distance between y coords*/
double z_third; /* distance between z coords*/
double dist; /* distance between 2 points*/
char line_0[100]; /* line of input data*/
char line_1[100]; /* line of input data*/

int main() {

	printf("Enter the x, y and z coordinates for the first point, seperated by a single space: \n"); /* input prompt*/
	fgets(line_0, sizeof(line_0), stdin); /* instantiates an input parameter for reading*/
	sscanf_s(line_0, "%f %f %f", &x_first, &y_first, &z_first); /* reads the parameter input by user and maps to variables*/
	printf("Enter the x, y, and z coordinates for the second point, seperated by a single space: \n");
	fgets(line_1, sizeof(line_0), stdin);
	sscanf_s(line_1, "%f %f %f", &x_second, &y_second, &z_second);
	x_third = fabs(x_second - x_first); /* fabs is absolute value for floating point numbers*/
	y_third =  fabs(y_second- y_first);
	z_third = fabs(z_second - z_first);
	dist =  sqrt(pow(x_third,2) + pow(y_third,2) + pow(z_third,2));

	printf("\nThe distance between your two points is %.2f.\n", dist);
	return 0;
}