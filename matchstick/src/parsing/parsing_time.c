/*
** parsing_time.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/parsing/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Mon Feb 13 15:37:31 2017 Quentin Laille
** Last update Thu Feb 23 09:23:41 2017 Quentin Laille
*/

#include "matchstick.h"

t_data		parsing_time(int size, int max)
{
  t_data	ret;
  int		cur;

  ret.pick_max = max;
  ret.base_length = (size * 2) - 1;
  ret.arr = malloc(sizeof(int) * (size + 1));
  ret.height = size;
  cur = 0;
  while (cur < size)
  {
    ret.arr[cur] = ((cur + 1) * 2) - 1;
    cur += 1;
  }
  ret.arr[cur] = -1;
  return (ret);
}
