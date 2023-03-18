#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*main - The entry point of the program
 *
 * Description: The program uses the modulo operator % to get the last digit of n. Then, it uses a series of if statements to check the value of the last digit and print the appropriate message. The program ends with a newline character to ensure that the output is on a new line.
 */

int main(void)

{
	int n;
	int last_digit;

	srand(time(NULL));
	n = (rand() % (199 + 1)) - 99;
	last_digit = abs(n) % 10;

	printf("Last didgit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
		printf("greater than 5\n");
	else if (last_digit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");

	/* Always 0 (Success) */
	return 0;
}
