#include "main.h"

/**
 * print_alphabet_x10 -print 10 times the alphabet
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int x;

	x = 0;

	while (x < 10)
	{
		ch = 97;
		while (ch <= 122)
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		x++;
	}
}
