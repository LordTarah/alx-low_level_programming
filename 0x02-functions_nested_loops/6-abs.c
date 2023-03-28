#include "main.h"
#include<stdio.h>
#include <stdlib.h>

/**
  *_abs - computes absolute value of integer
  *
  *@b: Value of integer
  *
  *Return: Absolute value of given integer.
  */
int _abs(int b)
{
	if (b < 0)
		b = -(b);
	else if (b >= 0)
		b = b;
	return (b);
}
