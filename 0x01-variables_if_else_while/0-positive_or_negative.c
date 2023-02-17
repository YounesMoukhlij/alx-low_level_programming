#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *  main - assign random nunbers to int and with if will give the right type of the int 
 *  it exectutes, and prints it
 *  Return as always 0  
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
