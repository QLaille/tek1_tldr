/*
** is_square.c for bsq in /CPE_2016_BSQ/functions/scan
**
** Made by timbus
** Login   <private>
**
** Started on  Wed Dec  7 11:07:07 2016 timbus
** Last update Thu Dec  8 13:03:28 2016 timbus
*/

#include "my_bsq.h"

int	is_square(char	**tab, int x, int y, int size)
{
  int	a;
  int	b;

  b = 0;
  while (b < size)
    {
      a = 0;
      while (a < size)
	{
	  if ((tab[y + b][x + a]) == 'o')
	    return (-1);
	  a += 1;
	}
      b += 1;
    }
  return (1);
}
