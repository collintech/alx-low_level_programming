#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
void print_times_table(int n) {
	if (n < 0 || n > 15) {
		return;
	}
	for (int i = 0; i <= 10; i++) {
		printf("%d x %d = %d\n", n, i, n*i);
	}
}

int main() {
	print_times_table(5);
	print_times_table(15);
	print_times_table(20);
	print_times_table(-5);
	return 0;
}
