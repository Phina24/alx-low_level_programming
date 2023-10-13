#include <stdio.h>
#include <stdlib.h>

/**
 * main: This prints the  opcodes of its own function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int bytes, n;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (n = 0; n < bytes; n++)
	{
		if (n == bytes - 1)
		{
			printf("%02hhx\n", ar[n]);
			break;
		}
		printf("%02hhx ", ar[n]);
	}
	return (0);
}
