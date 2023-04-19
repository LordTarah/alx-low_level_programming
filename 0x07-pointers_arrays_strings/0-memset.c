#include "main.h"

/**
  * _memset - Entry point
  * @s: Pointed route
  * @b: Constant
  * @n: Number of bytes
  * Return: Null.
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
