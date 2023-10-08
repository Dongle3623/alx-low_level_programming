#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the newly allocated space in memory,
 * containing s1, followed by the first n bytes of s2, and null terminated.
 * If the function fails, it returns NULL.
 * If n is greater or equal to the length of s2 then use the entire string s2.
 * If NULL is passed, treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int len_s1 = 0, len_s2 = 0;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len_s1])
        len_s1++;
    while (s2[len_s2])
        len_s2++;

    if (n >= len_s2)
        concat = malloc(sizeof(char) *(len_s1 + len_s2 + 1));
    else
        concat = malloc(sizeof(char) *(len_s1 + n + 1));

    if (concat == NULL)
        return (NULL);

    memcpy(concat, s1, len_s1);
    memcpy(concat + len_s1, s2, n >= len_s2 ? len_s2 : n);
    concat[len_s1 + (n >= len_s2 ? len_s2 : n)] = '\0';

    return (concat);
}
