#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *  string_nconcat - concatenates two string
 *  @s1: string one
 *  @s2: string two
 *  @n: number
 *  Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2;
	if (s1 == NULL)
		 s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	result = (char *)malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strncpy(result + len1, s2, n);
	 result[len1 + n] = '\0';
	 return (result);
}
