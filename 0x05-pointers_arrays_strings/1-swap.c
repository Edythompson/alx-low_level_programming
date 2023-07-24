#include "main.h"
/**
* swap_int - take in two variables change to integers and swap them
* @a: swaps and store address of a
* @b: swaps and store address of b
* Return: 0
*/
void swap_int(int *a, int *b)
{
  int change;
  change = *b;
   *b = *a;
   *a = change;
}
