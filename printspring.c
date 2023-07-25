include "main.h"

/**
 * print_string - a function that prints a string.
 * @str: the string to be printed.
 *
 * Return: the number of characters to be printed.
 */
int print_string(char *str)
{
	int num_of_characters_printed = 0;

	for (; str[i] != '\0'; i++)
	{
		num_of_characters_printed += my_putchar(str[i]);
	}

	return (num_of_characters_printed);
}
