#include "main.h"
/**
 * _abs - function that computs the absolute value
 * @c: int that act as argument
 *Return: Always 0 (Success)
 */
int _abs(int c)
{
if (c > 0 || c == 0)
{
return (c);
}
else
{
return (c * -1);
}
}
