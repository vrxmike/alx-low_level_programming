#include "main.h"
/**
 * print_number - Prints an integer.
 * you can only use 'putchar' function to print.
 * you are allowed to use 'long'.
 * you are not allowed to use arrays or pointers.
 * you are not allowed to hard-code special values.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
