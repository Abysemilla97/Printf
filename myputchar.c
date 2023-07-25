#include <unistd.h>
#include "main.h"

/**
 * my_putchar - a function that writes the character c to stdout.
 * @c: the character to print.
 *
 * Return: on success 1, on error -1.
 */
int my_putchar(char c)
{
	return (write(1, &c, 1));
}
