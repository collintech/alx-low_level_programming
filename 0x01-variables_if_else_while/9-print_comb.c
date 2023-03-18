#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations of single-digit numbers.
 *
 * Return:Always 0 (Success)
 *
 */

int main()
{
	int i, j, k, l;

	for (i = 0; i < 10; i++) {
		putchar(i + '0');
		for (j = i + 1; j < 10; j++) {
			putchar(',');
			putchar(' ');
			putchar(j + '0');
			for (k = j + 1; k < 10; k++) {
				putchar(',');
				putchar(' ');
				putchar(k + '0');
				for (l = k + 1; l < 10; l++) {
					putchar(',');
					putchar(' ');
					putchar(l + '0');
				}
			}
		}
	}

	return 0;
}
