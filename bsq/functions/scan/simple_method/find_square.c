/*
** find_square.c for bsq in /CPE_2016_BSQ/functions/scan
**
** Made by timbus
** Login   <private>
**
** Started on  Mon Dec  5 10:28:47 2016 timbus
** Last update Fri Dec 16 15:21:21 2016 timbus
*/

#include "my_bsq.h"

void	find_a_square(t_data data, int size)
{
  char	**ret;

  ret = NULL;
  if (size > 0)
    {
      ret = this_big(data.tab, data.size_x, data.size_y, size);
      if (ret == NULL)
      find_a_square(data, size - 1);
      else
      display(ret);
    }
}
