/*
** matchstick.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Mon Feb 13 09:08:12 2017 Quentin Laille
** Last update Mon Feb 20 16:55:00 2017 Quentin Laille
*/

#include "matchstick.h"

int	matchstick(char *arg_1, char *arg_2)
{
  t_data	data;
  int		size;
  int		max;

  max = my_getnbr(arg_2);
  size = my_getnbr(arg_1);
  if (size < 1 || size > 100)
  return (84);
  if (max < 1 || max > (size * 2 - 1))
  return (84);
  data = parsing_time(size, max);
  return (game_time(data));
}
