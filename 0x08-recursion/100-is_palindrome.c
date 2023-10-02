#include "main.h"

int check_palidrome(char *s, int a, int len);
int _strlen(char *s);

/**
 * is_palindrome: checks if a string is a palindrome
 * @s: string to be reversed
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen(s)));
}

/**
 * _strlen_recursion: This returns the length of a string
 * @s: string for length to be calculated of
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * check_palindrome: This checks recursively if the string is a palindrome
 * @s: string to be checked
 * @a: iterator
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int a, int len)
{
	if (*(s + a) != *(s + len - 1))
		return (0);
	if (a >= len)
		return (1);
	return (check_pal(s, a + 1, len - 1));
}

