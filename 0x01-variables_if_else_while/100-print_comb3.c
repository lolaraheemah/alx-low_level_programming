#include <stdio.h>
/**
 * main - Prints numbers between 00 to 89.
 *
 * Description: using the main function
 * this program prints "All possible combinations of two numbers"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		if (e != i && e < i)
		{
			putchar(e);
			putchar(i);
			if (i == 57 && e == 56)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
