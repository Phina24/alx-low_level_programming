#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: is the memory where is stored to
 *@src: is the memory where is copied from
 *@n: is the number of bytes
 *
 *Return: the copied memory with n bytes that was changed to
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
