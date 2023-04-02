#include "main.h"
/**
  *print_line - prints line when n is 0 or less
  *@n: number of times _ is printed
  */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
