#include "main.h"

/**
 * print_alphabet_x10 - print 10x alpha in lc
 */

void print_alphabet_x10(void)
{
	int x10;
	char c;

	for (x10 = 0; x10 < 10; x10++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar (c);
		_putchar ('\n');
	}
}
