#include <stdio.h>
/**
* Main – prints the last digit of a randomly generated number and whether it is greater than 5, less than 6, or 0
*
* Return: Always 0
*/
int main(void)
{
	srand (time (0));
	n = rand () – rand_max/2;
	if ((n % 10) > 5) 
	{
	printf(“last digit of %d is %d and is greater than 5\n”, n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
	printf(“last digit of %d and is less than 6 and not 0\n”, n, n % 10 );
	}
	else 
	{
	printf(“last digit of %d is %d and is 0\n”, n, n % 10);
	}
	return (0)
}

