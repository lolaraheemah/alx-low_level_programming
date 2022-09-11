#include <stdio.h>
/**
 * main - prints reversed alphabets
 *
 * Description: using the main function
 * this program prints "All Alphabets in reversed order"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

