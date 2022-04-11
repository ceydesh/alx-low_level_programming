#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 *
 * Return: always 0.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
}
