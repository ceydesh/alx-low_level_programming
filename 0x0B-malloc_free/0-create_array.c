#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initialize with specific cha
 * @size: size of array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
