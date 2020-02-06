/*
** extract_line.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/parsing/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Thu Dec 22 14:34:07 2016 Quentin Laille
** Last update Thu Dec 22 14:34:27 2016 Quentin Laille
*/

#include "wolf3d.h"

int	extract_line(char *str, int from, int to)
{
  char	*nbr;
  int	i;

  i = 0;
  if (str[from] == ',')
    from += 1;
  nbr = my_calloc(to - from + 1);
  while (from < to)
    {
      nbr[i] = str[from];
      from += 1;
    }
  return (my_get_nbr(nbr));
}
