#include "main.h"
/**
 * print_last_digit - get thelast digit of an integer
 * @n: a input for number
 * Return:( n % 10) = (i) always
 * description: a program that prints the last digit of a number
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i = -i;

	_putchar('0' + i);

	return (i);

	_putchar('\n');
}
