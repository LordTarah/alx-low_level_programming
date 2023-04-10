#include "main.h"
#include <stdio.h>

/**
  * _strncat - concentrates two strings
  *
  *@src: The string appended to dest
  *
  * an inputed number of bytes from src
  *
  *@dest:The string to be appended
  *
  *@n: Number of bytes fr0m src
  *
  *Return: Pointer to existing string
  */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
