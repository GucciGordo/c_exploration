#include <stdio.h>
#include <string.h>



int counter(char string[])
{
	int index;
	for (index = 0; string[index] != '\0'; ++index)
		continue;
		return(index);

}

int main()
{
	char line[100];
	printf("Enter the word 'quit' to exit.\n");
	while (1)
	{
		printf("Enter a word:");
		fgets(line, sizeof(line), stdin);
		line[strcspn(line, "\n")] = '\0'; /* Replace newline character (\n) with \0 */
		if (_strcmpi(line, "Quit") == 0) /* Exit loop. Indiscrminate capitalization */
			break;
		else
		printf("\n\n>>>>>>>>>>>>>>>> Your word has %d characters in it. <<<<<<<<<<<<<<<<\n\n", counter(line));
	}
}