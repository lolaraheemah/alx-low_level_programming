#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers,
 * @n: number of elements in an array.
 * @a: array.
 * Return: no return.
 */
void reverse_array(int *a, int n)
{
	int i, o, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (o = i = 1; o > 0; o--)
		{
			temp = *(a + o);
			*(a + o) + *(a + (o - 1));
			*(a + (o - 1)) = temp;
		}
	}
}
