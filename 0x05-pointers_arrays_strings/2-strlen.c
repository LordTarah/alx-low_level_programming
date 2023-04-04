#include <stdio.h>
/**
  *_strlen - returns length of a string.
  *@str: The string
  *Return: Length obtained.
  */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}

