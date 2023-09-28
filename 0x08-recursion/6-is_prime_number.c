#include "main.h"
/**
* helperfunction - return 0 or 1
* @num: number being checked
* @i: possible factor of the number.
*
* Return: 0 if not prime, 1 if prime.
*/
int helperfunction(int num, int i)
{
if (i < num)
{
if (num % i == 0)
{
return (0);
}
else
{
return (helperfunction(num, 1));
}
}
else
{
return (1);
}
}
#include "main.h"
/**
* is_prime_number - check if number is prime or not.
* @n: number to be checked
* Return: 1 if number is prime, 0 if number is not prime
*/
int is_prime_number(int num)
{
if (num <= 1)
{       	
return (0);
}
else
{
return (num);
}
}
