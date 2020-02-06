/*
** my_str_to_wordtab.c for bsq
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Sat Nov 26 13:39:11 2016 Quentin Laille
** Last update Thu Dec  8 10:39:51 2016 Quentin Laille
*/

#include "wolf3d.h"

int	how_many(char *str)
{
  int	x;
  int	ret;

  ret = 1;
  x = 0;
  while (str[x] != '\0')
    {
      if (str[x] == '\n')
	ret += 1;
      x += 1;
    }
  return (ret);
}

char *extract(char *str, int to)
{
  char	*ret;
  int	x;

  x = 0;
  ret = my_calloc(to);
  while (x < to)
    {
      ret[x] = str[x];
      x += 1;
    }
  ret[x] = '\0';
  return (ret);
}

char	**my_str_to_wordtab(char *str)
{
  char	**ret;
  int	cur;
  int	x;
  int	size;
  int	i;

  i = 0;
  x = 0;
  cur = 0;
  size = how_many(str);
  ret = malloc(sizeof(char*) * size);
  while (str[x] != '\0')
    {
      if (str[x] == '\n')
      {
        ret[i] = extract(str + cur, x - cur);
        cur = x + 1;
        i += 1;
      }
      x += 1;
    }
    return (ret);
}
