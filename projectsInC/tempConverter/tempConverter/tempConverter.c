#include <stdio.h>

float f; /*temp in F*/
float c; /*temp in C*/

int main() {

	printf("Please enter a temperaute in Centigrade that you would like converted to Fahrenheight: ");
	scanf_s("%f", &c);
	f = 9 / 5 * c + 32;
	printf("%.0f degrees Centigrade is %.0f degrees Fahrenheight", c, f);
	return 0;
}
