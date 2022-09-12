#include "main.h"


/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 * Followed by a new line
 * You can only use 'putchar' twice
 * Return: always zero
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
