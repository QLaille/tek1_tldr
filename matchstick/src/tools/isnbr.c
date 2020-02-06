/*
** isnbr.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/tools/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Thu Feb 23 15:58:09 2017 Quentin Laille
** Last update Thu Feb 23 16:03:57 2017 Quentin Laille
*/

#include "matchstick.h"

int	isnbr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] < '0' || str[i] > '9')
    {
      my_error(ERR_PNBR);
      return (84);
    }
    i += 1;
  }
  return (0);
}
