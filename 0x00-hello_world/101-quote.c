#include <unistd.h>
/**
 * main - prints a string to standard error
 *
 * Return: 1
 */
int main(void)
{
char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, str, 58);
return (1);
}