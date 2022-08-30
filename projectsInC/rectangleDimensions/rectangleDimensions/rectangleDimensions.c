#include <stdio.h>

float a;
float b;
float area;
float perimeter;

int main() {


	printf("Enter the length of side a:\n");
	/*Read the input from user. Notice the & character before the parameter.
	This is neccasary for a read operation.*/
	scanf_s("%f", &a);
	printf("Enter the length of side b:\n");
	scanf_s("%f", &b);
	area = a * b;
	perimeter = 2 * a + 2 * b;
	printf("The  area of your rectangle is: %.3f\n", area);
	printf("The perimeter of your rectangle is: %.3f\n", perimeter);

	return 0;

}