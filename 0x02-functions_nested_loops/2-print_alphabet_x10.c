#include "main.h"
/**
 * main - chaeck the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void) {
	int i, j;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 26; j++) {
			_putchar('a' + j);
		}
		_putchar('\n');
	}
}

int main()
{
	print_alphabet_x10();
	return (0);
}
