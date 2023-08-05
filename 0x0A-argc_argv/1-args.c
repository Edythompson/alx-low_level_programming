#include <stdio.h>
/**
* main - print the number of argument passed into it
* @argc: number of command line arguments
* @argv: array that conatins the program command line arguments.
* Return: (0) when successful
*/
int main(int argc, char **argv __attribute__ ((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
