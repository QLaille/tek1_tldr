/*
** my_calloc.c for my_calloc in /CPE_2016_BSQ/tools
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Wed Dec  7 14:33:09 2016 Quentin Laille
** Last update Wed Dec 21 11:19:18 2016 Quentin Laille
*/

#include "wolf3d.h"

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
