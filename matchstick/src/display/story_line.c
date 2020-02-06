/*
** story_line.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/parsing/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Tue Feb 14 17:13:27 2017 Quentin Laille
** Last update Tue Feb 21 10:05:19 2017 Quentin Laille
*/

#include "matchstick.h"

void	story_line(t_data data, int line)
{
  int	cur;
  int	spc;

  cur = 0;
  spc = data.height - line;
  my_putchar('*');
  while (cur < data.base_length)
  {
    if (cur >= spc && cur <= data.arr[line - 1] + spc - 1)
    my_putchar('|');
    else
    my_putchar(' ');
    cur += 1;
  }
  my_putchar('*');
  my_putchar('\n');
}
