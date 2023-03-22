#include "main.h"
/**
 * main - Entry point
 *
 * Return - Always zero when successful
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}

int main()
{
	print_alphabet();
	return (0);
}
