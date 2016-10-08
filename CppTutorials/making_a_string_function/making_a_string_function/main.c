/*

Look up how to make your own string function in c

*/

#include <stdio.h>

int main()
{
	int i = 0, j= 0;
	char letter;
	char name[100];

	do
	{
		scanf_s("%c", &letter);

		name[i] = letter;
		i++;

	} while (letter != ' ');



	printf("\n\n");

	for (j; j < 100; j++)
	{
		printf("%c", name[j]);
	}

	


	printf("\n----End of prog----\n");

	return 0;
}