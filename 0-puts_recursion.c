#include "main.h"

/**
 * _puts_recursion -  function that prints a string
 *
 * @a: string to receive
 *
 * Return: nothing
 */

void _puts_recursion(char *a)
{
	if (*a == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*a);
	a++;
	_puts_recursion(a);
}
