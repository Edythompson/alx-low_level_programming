#include "main.h"
/**
* helperfunction - checks if sqrt number exits
* @num: number
* @psqrt: possible sqrt of number
*
* Return: sqrt of number or -1 for error
**/
int helperfunction(int num, int sqrt)
{
if ((sqrt * sqrt) == num)
{
return (sqrt);
}
else
{
if ((sqrt * sqrt) > num)
return (-1);
else
return (helperfunction(num, sqrt + 1));
}
/**
* _sqrt_recursion - retrun the natural square root of a number
* @n: number to fine sqrt of.
*
* Return: square root  of n.
* -1 if n does not have a natural sqrt
**/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (helperfunction(n, 0));
}


