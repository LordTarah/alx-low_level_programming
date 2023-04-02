#include "main.h"
/**
  *_isdigit - identifies if a character is a digit
  *@c: character is digit to be identified.
  *Return: 1 if c is digit, 0 otherwise.
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
