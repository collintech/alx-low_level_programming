#include "main.h"
/**
 * main - Entry point
 *
 * Return - Always zero when successful
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
