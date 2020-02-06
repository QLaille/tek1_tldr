/*
** this_big.c for bsq in /CPE_2016_BSQ/functions/scan
**
** Made by timbus
** Login   <private>
**
** Started on  Wed Dec  7 08:43:25 2016 timbus
** Last update Thu Dec  8 13:19:46 2016 timbus
*/

#include "my_bsq.h"

char	**this_big(char **tab, int x, int y, int size)
{
  char	**ret;
  int	i;
  int	j;

  ret = NULL;
  i = 0;
  j = 0;
  while ((j + size) <= y)
    {
      while ((i + size) <= x)
	{
	  if (is_square(tab, i, j, size) == 1)
	    {
	      ret = fill_square(tab, i, j, size);
	      return (ret);
	    }
	  i += 1;
	}
      i = 0;
      j += 1;
    }
  return (ret);
}
