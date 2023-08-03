#include "main.h"
/**
 * is_prime_number - check if number is prime or not.
 * @n: number to be checked
 * Return: 1 if number is prime, 0 if number is not prime
 */
int is_prime_number(int n)
{
  int i;
  
  if (n <= 1)
    return (0);
  
  for (i = 2; i < n; i++)
  {
    if (n % i == 0)
      return(0);
  }
  
  return (1);
}
