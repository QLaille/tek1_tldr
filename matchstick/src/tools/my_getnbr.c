/*
** my_getnbr.c for getnbr in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/tools/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Wed Feb 15 08:49:08 2017 Quentin Laille
** Last update Sun Feb 26 19:16:32 2017 Quentin Laille
*/

#include "matchstick.h"

int	my_getnbr(char *str)
{
  int	nbr;
  int	cur;

  if (str == NULL)
  return (-1);
  cur = 0;
  nbr = 0;
  while (str[cur] > 47 && str[cur] < 58)
  {
    nbr = (nbr * 10) + (int)str[cur] - 48;
    cur += 1;
  }
  nbr *= isneg(str);
  return (nbr);
}
