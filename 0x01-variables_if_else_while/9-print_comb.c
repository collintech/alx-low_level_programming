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
	int i, j, k;
	for (i = 0; i <= 9; i++) {
		for (j = i + 1; j <= 9; j++) {
			for (k = j + 1; k <= 9; k++) {
				putchar(i + '0');
				putchar(',');
				putchar(' ');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
				putchar(k + '0');
				putchar('\n');
			}
		}
	}
	return 0;
}
