#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	    int n;
	        srand(time(0));
		    n = rand() % RAND_MAX;

		        printf("%d is ", n);
			    if (n > 0) {
				            printf("positive\n");
					        } else if (n == 0) {
							        printf("zero\n");
								    } else {
									            printf("negative\n");
										        }
			        return 0;
}
