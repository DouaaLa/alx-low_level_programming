#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n ; 

	int lastDigit;
        

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	/* your code goes there */

        if (lastDigit > 5 )

	     printf("Last digit of %d", n "is %d", lastDigit , "and is greater than 5 \n");

	else if (lastDigit == 0 )

             printf("Last digit of %d", n "is %d", lastDigit , "and is 0 \n"); 
	
	else if (lastDigit < 6 )

	      printf("Last digit of %d", n "is %d", lastDigit , "and is less than 6 and not 0");
	
	return (0);
}
