/*
** cpu_time.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/cpu/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Wed Feb 15 15:29:24 2017 Quentin Laille
** Last update Sun Feb 26 18:32:59 2017 Quentin Laille
*/

#include "matchstick.h"

int	cpu_turn(t_data *data)
{
  int	line;
  int	nbr;
  int	x;

  nbr = -1;
  line = -1;
  my_printf("%s\n", CPU_TURN);
  x = cpu_normalize(data, &line, &nbr);
  if (x != 1)
  cpu_clean(data, &line, &nbr);
  my_printf("%s%d%s%d\n", CPU_PIK1, nbr, CPU_PIK2, line + 1);
  return (pick(data, line, nbr));
}
