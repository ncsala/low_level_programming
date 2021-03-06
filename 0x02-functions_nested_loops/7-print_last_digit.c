#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: given number
 *
 * Return: value of the last digit.
 */

int print_last_digit(int n)
{
	int residue = n % 10;

	if (n < 0)
		residue *= -1;

	_putchar('0' + residue);

	return (residue);
}

