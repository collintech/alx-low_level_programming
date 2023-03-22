#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int print_sign(int n) {
	if (n > 0) {
		printf("+");
		return 1;
	} ele if (n == 0) {
		printf("0");
		return 0;
	} else {
		printf("_");
		return -1;
	}
}
