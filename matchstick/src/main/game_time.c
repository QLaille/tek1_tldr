/*
** game_time.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Thu Feb 16 11:01:52 2017 Quentin Laille
** Last update Thu Feb 23 15:49:30 2017 Quentin Laille
*/

#include "matchstick.h"

int	game_time(t_data data)
{
  int	turn;
  int	end;

  end = 0;
  turn = 1;
  disp_map(data);
  while (end == 0)
  {
    my_putchar('\n');
    if (turn == 1)
    end = player_turn(&data);
    else
    end = cpu_turn(&data);
    if (end != 84)
    disp_map(data);
    turn = !turn;
  }
  if (end == 84)
  return (0);
  end_game(end);
  return (end);
}
