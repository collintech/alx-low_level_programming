#include "main.h"
#include <stdio.h>
/**
 * main - function name
 * return - 0 (success)
 */
int main(void)
{
	int a[] = { 97, 98, 99 };
	int *p = a;

	p = p + 2;
	printf("a[2] = %d\n", *(p));
	return 0;
}
