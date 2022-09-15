#include "main.h"

/**
 * print_triangle - prints a triangle.
 * you can only use 'putchar' once.
 * use the character'#' to print the triangle.
 * @size: size of the triangle.
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
