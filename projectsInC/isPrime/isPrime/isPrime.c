#include <stdio.h>
#include <math.h>


int number_input; /* number input by user */
int i; /* Iterator */
int j = 0; /* Secondary iterator */


main()
{
	printf("This is a prime number checker. Please enter a number to see if it is prime.");
	scanf("%d", &number_input);
	for (i = 2; i < number_input; ++i)
	{
		if (number_input % i == 0)
		{
			j += 1;
			printf("\nYour number is divisible by %d. It is not a prime number.\n", i);
		}
	}
	if (j == 0)
	{
		printf("\nYour number is prime!\n");
	}
	return 0;
}
