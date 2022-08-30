#include <stdio.h>

int old_number;
int current_number;
int new_number;

int main() {
	/* Initialize */
	old_number = 1;
	current_number = 1;

	printf("%d\n",current_number);
	while (current_number < 1000) {

		printf("%d\n", current_number);
		new_number = current_number + old_number;
		old_number = current_number;
		current_number = new_number;
	}
	return 0;

}