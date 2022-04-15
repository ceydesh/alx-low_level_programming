#include "main.h"

/**
 * print_line - draws astraight line
 * @n: number of times thecharacter _ should be printed
 *
 * Return: _followed by a new line
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)

		_putchar('_');
	}

	_putchar('\n');
}
