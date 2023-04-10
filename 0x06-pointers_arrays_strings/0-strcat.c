#include "main.h"
#include <stdio.h>

/**
  *_strcat - helps concentrate two strings
  *@dest: Destination to string
  *@src: The original string
  *Return: Pointer to existing string
  */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
