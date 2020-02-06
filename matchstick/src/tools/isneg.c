/*
** isneg.c for isneg in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/tools/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Wed Feb 15 09:01:15 2017 Quentin Laille
** Last update Wed Feb 22 09:44:49 2017 Quentin Laille
*/

#include "matchstick.h"

int	isneg(char *str)
{
  int	mux;
  int	cur;

  cur = 0;
  mux = 1;
  while (str[cur] == '-')
  {
    mux *= (-1);
    cur += 1;
  }
  return (mux);
}
