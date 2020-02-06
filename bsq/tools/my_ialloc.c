/*
** my_ialloc.c for my_ialloc in /wireframe/tools
**
** Made by timbus
** Login   <private>
**
** Started on  Wed Dec  7 14:22:29 2016 timbus
** Last update Wed Dec  7 15:16:17 2016 timbus
*/

#include "my_bsq.h"

int	*my_ialloc(int length)
{
  int	*ret;
  int	i;

  i = 0;
  ret = malloc(sizeof(int) * length);
  while (i < length)
    {
      ret[i] = 0;
      i += 1;
    }
  return (ret);
}
