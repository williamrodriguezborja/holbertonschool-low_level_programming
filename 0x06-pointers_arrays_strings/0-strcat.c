#include "holberton.h"
#include <stdio.h>
/**
 * char *_strcat(char *dest, char *src);
 * Return: char * with union
 */
char *_strcat(char *dest, char *src)
{
  int length = 0, i;
  
  while (dest[length])
    length++;

  for (i = 0; src[i]; i++, length++)
    dest[length] = src[i];

  return dest;
}
