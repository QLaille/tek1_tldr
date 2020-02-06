/*
** cpu_finish_him.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/cpu/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Sun Feb 26 18:47:05 2017 Quentin Laille
** Last update Sun Feb 26 19:43:43 2017 Quentin Laille
*/

#include "matchstick.h"

void	cpu_finish(t_data *data, int *line, int *nbr)
{
  int	cur;

  cur = 0;
  while (data->arr[cur] == 0)
  cur += 1;
  (*line) = cur;
  if (data->arr[cur] == 1)
  (*nbr) = 1;
  else
  (*nbr) = data->arr[cur] - 1;
}
