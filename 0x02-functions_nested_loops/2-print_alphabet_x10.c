#include "main.h"
/**
  *print_alphabet_x10 - Prints the alphabet 10 times.
  *
  *Return: Always 0 (Success)
  */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (j = 1; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
