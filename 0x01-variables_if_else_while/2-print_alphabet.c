#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 *Description: using the main function
 *this program prints "The Alphabets"
 *Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
