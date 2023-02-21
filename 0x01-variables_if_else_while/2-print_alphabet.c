#include<stdio.h>
/**
 * main - Prints out alphabets in lower case
 * Return: always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		putchar (letter);

	putchar ('\n');
	return (0);
}
