/*
** player_time.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/operate/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Wed Feb 15 09:09:05 2017 Quentin Laille
** Last update Sun Feb 26 14:52:01 2017 Quentin Laille
*/

#include "matchstick.h"

int	player_turn(t_data *data)
{
  int	line;
  int	nbr;

  nbr = 0;
  my_printf("%s\n", PLA_TURN);
  while (nbr == 0)
  {
    if ((line = get_line(data)) == -84)
      return (84);
    if ((nbr = get_number(data, line)) == -84)
    return (84);
  }
  my_printf("Player removed %d match(es) from line %d\n", nbr, line + 1);
  return (pick(data, line, nbr) * 2);
}
