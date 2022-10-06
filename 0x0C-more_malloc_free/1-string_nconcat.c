#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: first n bytes of concatenated string
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a, len1, len2;

	len1 = 0;
	while(s1[len1])
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2])
	{
		len2++;
	}
	if (n > len2)
	{
		n = len2;
	}
	p = malloc(sizeof(char) * len1);
	for (a = 0; a < len1; a++)
	{
		p[a] = s1[a];
	}
	p = realloc(p, n);
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < n; a++)
	{
		p[len1 + a] = s2[a];
	}
	
	p[len1 + a] = '\0';	
	return (p);
}
		