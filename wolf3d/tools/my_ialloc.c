/*
** my_ialloc.c for my_ialloc in /wireframe/tools
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Wed Dec  7 14:22:29 2016 Quentin Laille
** Last update Wed Dec 21 11:19:29 2016 Quentin Laille
*/

#include "wolf3d.h"

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
