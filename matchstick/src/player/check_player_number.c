/*
** check_player_number.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/operate/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Thu Feb 16 10:23:28 2017 Quentin Laille
** Last update Thu Feb 23 16:21:47 2017 Quentin Laille
*/

#include "matchstick.h"

int	check_player_number(t_data *data, int line, int nbr)
{
  if (nbr <= 0)
  {
    my_error(ERR_PNBR);
    return (84);
  }
  if (nbr > data->pick_max)
  {
    write(1, ERR_SIZ1, my_strlen(ERR_SIZ1));
    my_printf("%d ", data->pick_max);
    write(1, ERR_SIZ2, my_strlen(ERR_SIZ2));
    my_printf("\n");
    return (84);
  }
  if (nbr > data->arr[line])
  {
    my_error(ERR_EMP);
    return (84);
  }
  else
  return (0);
}
