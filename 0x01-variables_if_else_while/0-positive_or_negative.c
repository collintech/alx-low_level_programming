/* This is a program that generates a random number and prints whether
 *    it is positive, negative, or zero. */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *  * main - entry point of the program
 *   *
 *    * Return: 0 on success
 *     */

int main(void)
{
	    int n;

	        srand(time(0));
		    n = rand() - RAND_MAX / 2;

		        printf("%d ", n);

			    if (n > 0)
				        {
						        printf("is positive\n");
							    }
			        else if (n == 0)
					    {
						            printf("is zero\n");
							        }
				    else
					        {
							        printf("is negative\n");
								    }

				        return (0);
}
