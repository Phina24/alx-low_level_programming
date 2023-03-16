#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @a: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *a)
{
	int i, j, k, l, m, n;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	m = 0;
	n = 0;

	while (a[l] != '\0')
		l++;

	while (i < l && m == 0)
	{
		if (a[i] == '-')
			++j;

		if (a[i] >= '0' && a[i] <= '9')
		{
			n = a[i] - '0';
			if (j % 2)
				n = -n;
			k = k * 10 + n;
			m = 1;
			if (a[i + 1] < '0' || a[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}

	if (m == 0)
		return (0);

	return (k);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
