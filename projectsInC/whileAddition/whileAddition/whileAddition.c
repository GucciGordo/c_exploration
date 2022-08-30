#include <stdio.h>

char line[100];
int total;
int item;
int minus_items;

int main() {
	printf("Enter 0 to end the program!\n");
	total = 0;
	while (1) {
		printf("Enter # to add: \n");
		fgets(line, sizeof(line), stdin);
		sscanf_s(line, "%d", &item);

		if (item == 0)
			break;
		if (item < 0) {
			++minus_items;
			continue;
		}

		total += item;
		printf("Total: %d\n\n", total);
	}
	printf("\nFinal total %d\n", total);
	printf("With %d negative entries omitted\n", minus_items);
	return 0;
}