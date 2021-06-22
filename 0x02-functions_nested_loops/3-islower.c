#include "holberton.h"

/**
 * _islower - entry point
 *
 * Description: checks for lowercase
 *
 * Return: void
 */

int _islower(int c)
{
  int i;
  for (i = 0; i < 53; i++)
    {
      if ((c > 64) && (c < 91))
	return(1);
      else
	return(0);
    }
  return(0);	 
}
