#include "main.h"
#include <stdio.h>
void _puts_recursion(char *s)
{
    if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
int main(void)
{
char *str = "Hello, World!";
_puts_recursion(str);
return 0;
}
