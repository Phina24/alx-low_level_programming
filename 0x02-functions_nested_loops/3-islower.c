#include "main.h"
/**
 * main -  Entry point
 * Return: 1 if it is lower case and 0 otherwise
 */
int_islower(int c)
{
	if (c >= '97' && c <= '122')
		return (1);
	else
		return (0);
}
