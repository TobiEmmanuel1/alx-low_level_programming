#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-program entry point.
 *
 * Return: if no error, non-zero value if error
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	num = n % 10;
	if (num > 5)
	{
		printf("%d and is greater thamn 5\n", num);
	}
	else if (num == 0)
	{
		printf("%d and is 0\n", num);
	}
	else if ((num < 6) && (num != 0))
	{
		printf("%d and is less than 6 and not 0\n", num);
	}
	return (0);
}
