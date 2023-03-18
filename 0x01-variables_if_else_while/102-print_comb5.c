#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations of two-digit numbers
 *
 */

int main(void)

{
	int i, j;

	for (i = 0; i < 100; i++) {
		for(j = i; j < 100; j++) {
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 99 || j != 99) {
				putchar(',');
				putchar(' ');
			}
		}
	}

	/* Always 0 (Success) */
	return 0;
}
