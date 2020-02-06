/*
** check_player_line.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/operate/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Thu Feb 16 10:15:52 2017 Quentin Laille
** Last update Thu Feb 23 15:53:30 2017 Quentin Laille
*/

#include "matchstick.h"

int	check_player_line(t_data *data, int line)
{
  if (line < 0)
  {
    my_error(ERR_OUTR);
    return (84);
  }
  else if (line > data->height)
  {
    my_error(ERR_OUTR);
    return (84);
  }
  else if (data->arr[line] == 0)
  {
    my_error(ERR_EMP);
    return (84);
  }
  else
  return (0);
}
