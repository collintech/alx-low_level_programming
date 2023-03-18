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
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
		printf("Last didgit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d id %d and is 0\n", n, last_digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n , last_digit);

	/* Always 0 (Success) */
	return (0);
}
