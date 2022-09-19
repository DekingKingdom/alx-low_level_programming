#include "main.h"
#include <stdio.h>

/**
* print_square - prints square of n size
* @size: size of square
*
* Return: void.
*/

void print_square(int size)
{
	int a;
	int b;

	if (size == 0)
	{
		putchar('\n');
	}
	b = 0;
	while (b < size)
	{
		a = 0;
		while (a < size)
		{
			putchar('#');
			a++;
		}
		putchar('\n');
		b++;
	}
}
