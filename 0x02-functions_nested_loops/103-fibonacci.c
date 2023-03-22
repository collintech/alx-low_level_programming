#include <stdio.h>
/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	int fib1 = 1, fib2 = 2, sum = 2, next_fib;
	while (fib2 <= 4000000) {
		next_fib = fib1 + fib2;
		if (next_fib % 2 == 0) {
			sum += next_fib;
		}
		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("%d\n", sum);
	return 0;
}
