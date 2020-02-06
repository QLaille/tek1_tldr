/*
** my_get_nbr.c for my_get_nbr in /B1-PSU/PSU_2016_my_printf/lib/my
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Mon Nov 14 10:26:54 2016 Quentin Laille
** Last update Wed Dec 21 11:19:24 2016 Quentin Laille
*/

#include "wolf3d.h"

int	my_get_nbr(char *str)
{
  int	cur;
  int	ret;

  ret = 0;
  cur = 0;
  while (str[cur] != '\0')
    {
      ret = ret * 10 + (str[cur] - 48);
      cur += 1;
    }
  return (ret);
}
