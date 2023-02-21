#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times in lower case
 *
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char a = 'a';

	while (i <= 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		i++;
		_putchar('\n');
	}
}
