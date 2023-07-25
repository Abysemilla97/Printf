#include "main.h"

/**
 * decimal_specifier - a signed decimal integer.
 * @digit: a decimal int.
 *
 * Return: the number to be printed.
 */
int decimal_specifier(int digit)
{
	int num_of_characters_printed = 0;

	if (digit < 0) /* Negative decimal intergers */
	{
		num_of_characters_printed += my_putchar('-');
		digit = digit * -1; /* digits are printed with '-' sign */
	}
/*
 * Using recursion we print the digit of numbers in a reverse order,
 * starting from the very last digit and ends with the first digit.
 */
	if (digit / 10)
	{
		num_of_characters_printed += decimal_specifier(digit / 10);
	}

	num_of_characters_printed += my_putchar((digit % 10) + '0');
	return (num_of_characters_printed);

}
