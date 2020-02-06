/*
** get_in_arr.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/parsing/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Thu Dec 22 14:35:27 2016 Quentin Laille
** Last update Thu Dec 22 14:35:38 2016 Quentin Laille
*/

#include "wolf3d.h"

int	*get_in_arr(char *str, int cur, int size)
{
  int	*ret;
  int	i;
  int	mem;

  mem = 0;
  ret = my_ialloc(size);
  i = 0;
  while (str[cur] != '\n')
    {
      if (str[cur] == ',')
	{
	  ret[i] = extract_line(str, mem, cur);
	  i += 1;
	  mem = cur;
	}
      cur += 1;
    }
  if (str[cur - 1] != ',')
    ret[i] = extract_line(str, mem, cur);
  return (ret);
}
