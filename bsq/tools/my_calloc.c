/*
** my_calloc.c for my_calloc in /CPE_2016_BSQ/tools
**
** Made by timbus
** Login   <private>
**
** Started on  Wed Dec  7 14:33:09 2016 timbus
** Last update Thu Dec  8 08:47:18 2016 timbus
*/

#include "my_bsq.h"

char	*my_calloc(int size)
{
  char	*ret;
  int	i;

  i = 0;
  ret = malloc(sizeof(char) * (size + 1));
  while (i < (size + 1))
    {
      ret[i] = '\0';
      i += 1;
    }
  return (ret);
}
