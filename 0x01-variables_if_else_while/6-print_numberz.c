#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9.
 *
 * Description: using the main functionn
 * this program prints "Numbers between 0 to 9 that are single digits"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
