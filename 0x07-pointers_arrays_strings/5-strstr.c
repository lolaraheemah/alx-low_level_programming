#include "main.h"
/**
 * _strstr - finds the first occurence of the substring.
 * needle in the spring haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substringf is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *shaystack;
	char *yneedle;

	while (*haystack != '\0')
	{
		shaystack = haystack;
		yneedle = needle;

		while (*haystack != '\0' && *yneedle != '\0' && *haystack == *yneedle)
		{
			haystack++;
			yneedle++;
		}
		if (!*yneedle)
			return (shaystack);
		haystack = shaystack + 1;
	}
	return (0);
}
