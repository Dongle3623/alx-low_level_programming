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
if (n == 0 || n == 1)
return (n);
return (_sqrt_helper(n, 1, n));
}
/**
 * _sqrt_helper - Recursive helper function to find the square root.
 * @n: The number to calculate the square root of.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 *
 * Return: The natural square root of `n`, or -1 if `n`
 * does not have a natural square root.
 */
int _sqrt_helper(int n, int start, int end)
{
int mid;
if (start <= end)
{
mid = (start + end) / 2;
if (mid <= n / mid && (mid + 1) > n / (mid + 1))
return (mid);
if (mid <= n / mid)
return (_sqrt_helper(n, mid + 1, end));
else
return (_sqrt_helper(n, start, mid - 1));
}
return (-1);
}
