/*
** is_winner.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/operate/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Wed Feb 15 09:09:27 2017 Quentin Laille
** Last update Tue Feb 21 11:25:03 2017 Quentin Laille
*/

#include "matchstick.h"

int	is_empty(t_data data)
{
  int	i;
  int	ret;

  ret = 1;
  i = 0;
  while (data.arr[i] != -1)
  {
    if (data.arr[i] != 0)
    ret = 0;
    i += 1;
  }
  return (ret);
}
