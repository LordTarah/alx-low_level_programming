#include "main.h"
#include<stdio.h>
#include <stdlib.h>

/**
  *
  */
int _abs(int b)
{
	if (b < 0)
		b = -(b);
	else if (b >= 0)
		b = b;
	return (b);
}
