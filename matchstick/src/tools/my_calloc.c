/*
** my_calloc.c for ProjectName in
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Wed Dec  7 14:33:09 2016 Quentin Laille
** Last update Sun Feb 19 19:14:15 2017 Quentin Laille
*/

#include "matchstick.h"

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
