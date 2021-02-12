#include "holberton.h"
/**
 * print_line
 * @n: number of lines _ to print
 */
void print_line(int n)
{
  if (n < 0)
  {
       _putchar('\n');
       return;
  }
  int i;

  for (i = 0 ; i < n ; i++)
  {
    _putchar('_');
  }
  _putchar('\n');
}
