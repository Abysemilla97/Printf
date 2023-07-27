#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * _printf - function produces output using a format
 * @format: a character string with directives
 * @...: varaible arguments passed to _printf function
 * Return: the number of char printed without null bytes
 */

int _printf(const char *format, ...)
{
	int num_of_characters_printed = 0;
	int i = 0; /* tracks iteration in loop */
	va_list checklist; /* Declaration of checklist */

	va_start(checklist, format);
	if (format == NULL)
		return (-1);
	for (; format[i] != '\0';)
	{
		if (format[i] != '%')
		{
			num_of_characters_printed += my_putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1]) /* evaluates each conversion specifier */
			{
				case 'c':
					num_of_characters_printed += my_putchar(va_arg(checklist, int));
					break;
				case 's':
					num_of_characters_printed += print_string(va_arg(checklist, char *));
					break;
				case '%':
					num_of_characters_printed += my_putchar('%');
					break;
				case 'd':
					num_of_characters_printed += decimal_specifier(va_arg(checklist, int));
					break;
				case 'i':
					num_of_characters_printed += decimal_specifier(va_arg(checklist, int));
					break;
				case 'b':
					num_of_characters_printed += binary_specifier(va_arg(checklist, int));
					break;	
				default:
					break;
			}
			i = i + 2; /* i is incremented by 2 if both conditions are True */
		}
	}
	return (num_of_characters_printed);
}
