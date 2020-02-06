/*
** my_cacalloc.c for my_cacalloc in /B1-CPE/CPE_2016_BSQ
**
** Made by timbus
** Login   <private>
**
** Started on  Thu Dec  8 09:22:44 2016 timbus
** Last update Thu Dec  8 09:24:28 2016 timbus
*/

#include "my_bsq.h"

char	**my_cacalloc(int size_y, int size_x)
{
  char	**ret;
  int	i;

  i = 0;
  ret = malloc(sizeof(char*) * size_y);
  while (i < size_y)
    {
      ret[i] = my_calloc(size_x);
      i += 1;
    }
  return (ret);
}
