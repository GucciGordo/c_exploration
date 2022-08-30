#include <stdio.h>

int result;
char operator;
int value;

int main()
{
	result = 0; /* intitialize the result*/
	while (1)
	{
		printf("Result: %d\n", result);
		printf("Enter operator and number: ");

		fgets(line, sizeof(line), stdin);
		sscanf_s(line, "%c %d", &operator, &value);

		if ((operator == 'q'))
	}

}