/*
** get_line.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/player/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Thu Feb 23 15:21:10 2017 Quentin Laille
** Last update Sun Feb 26 14:51:40 2017 Quentin Laille
*/

#include "matchstick.h"

int	get_line(t_data *data)
{
  int	line;
  char	*tmp;

  line = -1;
  tmp = NULL;
  while (line == -1)
  {
    my_printf("Line: ");
    tmp = get_next_line(0);
    if (tmp == NULL)
    return (-84);
    if (isnbr(tmp) == 0)
    {
      line = my_getnbr(tmp) - 1;
      if (check_player_line(data, line) == 84)
      line = -1;
    }
  }
  return (line);
}
