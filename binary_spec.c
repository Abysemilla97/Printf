#include "main.h"

/**
 * binary_specifier - that converts a decimal number into
 * a binary number and stores it in an array called abby.
 * @decimal_num: list of num in array.
 *
 * Return: numbers of char printed.
 */
int binary_specifier(int decimal_num)
{
	int abby[32];
	int j = 0;

	num_of_characters_printed = 0;

	while (decimal_num >= 2) /* loop breaks when digit is < 2 */
	{
		abby[j] = decimal_num % 2;
		decimal_num /= 2;
		j++;
	}

	abby[j] = decimal_num;

	for (; j >= 0; j--)
	{
		num_of_characters_printed += my_putchar(abby[j] + '0');
	}

	return (num_of_characters_printed);
}

