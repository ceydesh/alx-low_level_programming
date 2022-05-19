#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra parameters
 * Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list list;

	sum = 0;
	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}

