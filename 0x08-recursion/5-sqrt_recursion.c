#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of `n`, or -1 if `n` does not have a
 * natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (sqrt_helper(n, 0, n));
}
/**
 * sqrt_helper - Recursive helper function to find the square root.
 * @n: The number to calculate the square root of.
 * @min: The minimum possible value of the square root.
 * @max: The maximum possible value of the square root.
 *
 * Return: The natural square root of `n`, or -1 if `n` does not have a
 * natural square root.
 */
int sqrt_helper(int n, int min, int max)
{
if (max < min)
return (-1);
int guess = (min + max) / 2;
if (guess *guess == n)
return (guess);
else if (guess *guess < n)
return (sqrt_helper(n, guess + 1, max));
else
return (sqrt_helper(n, min, guess - 1));
}
