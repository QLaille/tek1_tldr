/*
** cpu_clean.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/cpu/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Thu Feb 16 11:08:43 2017 Quentin Laille
** Last update Sun Feb 26 19:43:18 2017 Quentin Laille
*/

#include "matchstick.h"

void	cpu_clean(t_data *data, int *line, int *nbr)
{
  int	sum;

  sum = cpu_sumline(data->arr);
  if (sum == 1)
  cpu_finish(data, line, nbr);
  else if (sum % 2 == 0)
  cpu_pick_line(data, line, nbr);
  else
  cpu_pick_match(data, line, nbr);
}
