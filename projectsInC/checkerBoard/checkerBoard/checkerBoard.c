#include <stdio.h>
/* An 8x8 checkerboard*/
int i, j, k, b;

int main()
{
	for (b = 0; b < 8; ++b)
	{
		printf("+");
		for (i = 0; i < 8; ++i)
		{
			printf("-----+");
		}
		printf("\n");
		for (j = 0; j < 2; ++j)
		{
			printf("|");
			for (k = 0; k < 8; ++k)
			{
				printf("     |");

			}
			printf("\n");
		}
	}
	printf("+");
	for (i = 0; i < 8; ++i)
	{
		printf("-----+");
	}

}