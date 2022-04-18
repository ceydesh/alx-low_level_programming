#include "main.h"
#include <stdio.h>

/**
 * main - main block, solve fizz buzz from numbers 1 to 100
 * but for multiples of three prints Fizz, Multiples of 5, print Buzz.
 * and for the multiples of five prints FizzBuzz.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");

	return (0);
}
