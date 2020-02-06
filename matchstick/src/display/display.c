/*
** display.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/display/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Mon Feb 13 15:54:24 2017 Quentin Laille
** Last update Sun Feb 26 19:09:23 2017 Quentin Laille
*/

#include "matchstick.h"

void	disp_map(t_data data)
{
  int	i;

  i = 0;
  star_line(data.height);
  while (data.arr[i] != -1)
  {
    story_line(data, i + 1);
    i += 1;
  }
  star_line(data.height);
}

void	disp_msg(char *msg)
{
  my_printf("%s\n", msg);
}
