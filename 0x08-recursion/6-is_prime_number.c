#include "main.h"
/**
 *is_prime - Checks if number is prime
 *@n: Number to be checked
 *@k: Parameter for 0 - n/2
 *Return: itself
 */
int is_prime(int n, int k)
{
if (n % k == 0)
{
return (0);
}
else if (k > n / 2)
{
return (1);
}
else
{
return (is_prime(n, k + 1));
}
}
/**
 *is_prime_number - Checks if a number is prime
 *@n: Number to be checked
 *Return: 0 or 1
 */
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
return (is_prime(n, 2));
}
