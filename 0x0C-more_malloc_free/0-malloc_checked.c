#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: int
 * Return: pointer to the array initialized or NULL`:wq
 */
void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	if (s == 0)
		exit(98);

	return (s);
}
