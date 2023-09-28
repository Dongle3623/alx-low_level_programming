#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 *
 * Description: This function prints each character of the string `s` in reverse
 * order using recursion. It starts by checking if the current character is the
 * null character (`'\0'`). If it is, the function returns. Otherwise, it calls
 * itself with the next character in the string (`s + 1`) and then prints the
 * current character using `putchar`.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
