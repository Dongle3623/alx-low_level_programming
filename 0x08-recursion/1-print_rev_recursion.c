#include "main.h"
/**
 * this function use recursion
 * to print strings in revers order
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
