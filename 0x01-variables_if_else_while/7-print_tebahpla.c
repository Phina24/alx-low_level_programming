#include<stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter++)
		putchar (letter);

	putchar ('\n');
	return (0);
}
