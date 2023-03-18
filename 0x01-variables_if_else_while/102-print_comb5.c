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

	for (i = 0; i <= 99; i++) {
		for(j = i; j <= 99; j++) {
			int d1 = i / 10, d2 = i % 10, d3 = j / 10, d4 = j % 10;
			putchar(d1 + '0');
			putchar(d2 + '0');
			putchar(' ');
			putchar(d3 + '0');
			putchar(d4 + '0');
			if (i != 99 || j != 99) {
				putchar(',');
				putchar(' ');
			}
		}
	}

	/* Always 0 (Success) */
	return 0;
}
