#include "main.h"
/**
 * leet - encodes into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int a, b;
	char s[] = "aAeEoOtTlL";
	char p[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == s[b])
			{
				n[a] = p[b];
			}
		}
	}
	return (n);
}

