/*
** cpu_normalize.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/cpu/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Thu Feb 16 11:08:18 2017 Quentin Laille
** Last update Sun Feb 26 18:36:43 2017 Quentin Laille
*/

#include "matchstick.h"

int	cpu_normalize(t_data *data, int *line, int *nbr)
{
  int	done;
  int	cur;

  cur = 0;
  done = 0;
  while (cur < data->height && done == 0 && data->arr[cur] != -1)
  {
    if (data->arr[cur] > data->pick_max)
    {
      printf("%d\n", cur);
      (*line) = cur;
      (*nbr) = data->arr[cur] - data->pick_max;
      done = 1;
    }
    cur += 1;
  }
  return (done);
}
