/*
** get_number.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/player/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Thu Feb 23 15:20:59 2017 Quentin Laille
** Last update Sun Feb 26 14:41:34 2017 Quentin Laille
*/

#include "matchstick.h"

int	get_number(t_data *data, int line)
{
  char	*tmp;
  int	nbr;

  my_printf("Matches: ");
  tmp = get_next_line(0);
  if (tmp == NULL)
  return (-84);
  nbr = my_getnbr(tmp);
  if (check_player_number(data, line, nbr) != 0)
  {
    nbr = 0;
  }
  return (nbr);
}
