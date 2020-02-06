/*
** cpu_pick_match.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/cpu/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Sun Feb 26 18:18:40 2017 Quentin Laille
** Last update Sun Feb 26 18:27:17 2017 Quentin Laille
*/

#include "matchstick.h"

void	cpu_pick_match(t_data *data, int *line, int *nbr)
{
  int	i;

  i = 0;
  while (data->arr[i] <= 0 && data->arr[i] != -1)
  i += 1;
  (*line) = i;
  (*nbr) = 1;
}
