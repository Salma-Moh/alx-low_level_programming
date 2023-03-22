#include "main.h"
#include <limits.h>

/**
 * print_last_digit - returns the last digit of a number
 * @k: integer to bring out last digit from
 *
 * Return: last digit
 */
int print_last_digit(int k)
{
	int i;

	if (k > 0)
	{
		i = k % 10;
	}
	else if (k < 0)
	{
		k *= -1;
		i = k % 10;
	}
	else
	{
		i = k;
	}
	_putchar(i + '0');
	return (i);
}

int main(void)
{
	int r;

	r = print_last_digit(INT_MIN);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
