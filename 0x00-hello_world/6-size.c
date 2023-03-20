#include <stdio.h>
/**
 * main Entry point
 * description- This is the starter template for the program
 */
int main(void)
{
	printf("Size of a char: %ld bytes(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	printf("Size of a double: %ld byte(s)\n", sizeof(double));
	printf("Size of a long double: %ld byte(s)\n", sizeof(long double));
	/**
	 * return - closing point of the program
	 * description: 0 means success, non-zero is failure
	 */
	return (0);
}
