/*
** star_line.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/parsing/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Tue Feb 14 17:07:09 2017 Quentin Laille
** Last update Tue Feb 21 09:33:15 2017 Quentin Laille
*/

#include "matchstick.h"

void	star_line(int height)
{
  int	cur;

  cur = 0;
  while (cur < (height * 2) + 1)
  {
    my_putchar('*');
    cur += 1;
  }
  my_putchar('\n');
}
