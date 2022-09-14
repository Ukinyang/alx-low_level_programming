#include "main.h"

/**
 * print_alphabet -Enrey point
 * Return:0
 */

void print_alphabet(void)
{
	int ch = 97;

	while (ch <= 122)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
