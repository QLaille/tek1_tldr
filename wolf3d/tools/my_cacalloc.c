/*
** my_cacalloc.c for my_cacalloc in /B1-CPE/CPE_2016_BSQ
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Thu Dec  8 09:22:44 2016 Quentin Laille
** Last update Wed Dec 21 11:19:12 2016 Quentin Laille
*/

#include "wolf3d.h"

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
