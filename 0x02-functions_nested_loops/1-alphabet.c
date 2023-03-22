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
		putchar(letter);
		letter++;
	}

	putchar('\n');
}
