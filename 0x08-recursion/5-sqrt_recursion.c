#include "main.h"
/**
 * find_sqrt - find the squreroot by checking if a number is applicable
 * @n: number to get squreroot of
 * @g: guessing parameter
 * Return: squre root or -1
 */
int find_sqrt(int n, int g)
{
if (g * g == n)
{
return (g);
}
else if (g * g > n)
{
return (-1);
}
return (find_sqrt(n, g + 1));
}
/**
 * _sqrt_recursion - finds the squre root of a number
 * @n: number to find squre root
 * Return: squre root
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (find_sqrt(n, 1));
}
