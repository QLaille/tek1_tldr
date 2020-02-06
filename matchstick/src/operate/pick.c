/*
** pick.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/operate/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Thu Feb 16 10:32:26 2017 Quentin Laille
** Last update Sun Feb 26 14:42:07 2017 Quentin Laille
*/

#include "matchstick.h"

int	pick(t_data *data, int line, int nbr)
{
  data->arr[line] -= nbr;
  return (is_empty(*data));
}
