#include <stdio.h>
/**
  *main - Entry point
  *Description: All possible combinaations of single digit numbers
  *Return: Always 0.
  */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 9)
			putchar(n + '0');
		else
			putchar(n + '0');
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
}
