/*
** cpu_find_line.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/cpu/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Thu Feb 16 14:03:00 2017 Quentin Laille
** Last update Thu Feb 23 09:34:27 2017 Quentin Laille
*/

#include "matchstick.h"

void	cpu_find_line(t_data *data, int *line, int *nbr)
{
  int	cur;

  cur = 0;
  while (data->arr[cur] != -1)
  {
    if (*nbr <= data->arr[cur])
    {
      *line = cur;
      return ;
    }
    cur += 1;
  }
}
