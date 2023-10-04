#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space in
 * memory containing s1 followed by
 * the contents of s2, and null terminated. Returns NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
int i, j, len1 = 0, len2 = 0;
char *new_str;
if (s1 == NULL)
s1 = "";
else
while (s1[len1])
len1++;
if (s2 == NULL)
s2 = "";
else
while (s2[len2])
len2++;
new_str = malloc((len1 + len2 + 1) * sizeof(char));
if (new_str == NULL)
return (NULL);
for (i = 0; i < len1; i++)
new_str[i] = s1[i];
for (j = 0; j < len2; j++)
new_str[i + j] = s2[j];
new_str[i + j] = '\0';
return (new_str);
}
