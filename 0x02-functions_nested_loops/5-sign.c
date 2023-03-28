#include "main.h"
#include <stdio.h>

/**
  *print_sign - print sign of a number
  *
  *@n: number whose sign is being checked'
  *
  *Return: 1 if n is + and n > 0, 0 if n = 0, and -1 if n is - and n < 0.
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
