#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;

	strout = malloc(i * sizeof(char));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= 1; j++)
	{
		strout[j] = str[j];
	}
	return (strout);
}
