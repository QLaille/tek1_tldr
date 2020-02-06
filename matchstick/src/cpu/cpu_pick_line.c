/*
** cpu_pick_line.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/cpu/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Sun Feb 26 18:18:02 2017 Quentin Laille
** Last update Sun Feb 26 18:26:57 2017 Quentin Laille
*/

#include "matchstick.h"

void	cpu_pick_line(t_data *data, int *line, int *nbr)
{
  int	i;

  i = 0;
  while (data->arr[i] <= 0)
  i += 1;
  (*line) = i;
  (*nbr) = data->arr[i];
}
