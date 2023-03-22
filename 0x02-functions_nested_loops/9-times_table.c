#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void) {
	int i;
	
	for (i = 0; i <=10; i++) {
		printf("9 x %d = %d\n", i, 9*i);
	}
}
