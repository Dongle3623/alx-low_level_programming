#include "main.h"
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else
return (is_prime_helper(n, 2));
}
/**
 * is_prime_helper - Recursive helper function to check if a number is prime.
 * @n: The number to check.
 * @i: The current divisor being checked.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_helper(int n, int i)
{
if (i * i > n)
return (1);
else if (n % i == 0)
return (0);
else
return (is_prime_helper(n, i + 1));
}
