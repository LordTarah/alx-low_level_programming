#include "main.h"

/**
  *_isalpha - checks for alphabetic character
  *
  *@c: Is character inserted into function.
  *
  *Return: 1 if c is uppercase or lowercase, otherwise 0
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
