#include "main.h"
/**
 * print - Prints a string
 * @str: The string to print
 */
void print(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to print
 * @f: The function to use to print the name
 */
void print_name(char *name, void (*f)(char *))
{
    f(name);
}
