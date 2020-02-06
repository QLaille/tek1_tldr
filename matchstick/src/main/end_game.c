/*
** end_game.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Sun Feb 19 18:48:02 2017 Quentin Laille
** Last update Fri Feb 24 08:51:06 2017 Quentin Laille
*/

#include "matchstick.h"

void	end_game(int end)
{
  if (end == 1)
  my_printf("%s\n", CPU_LOSE);
  else if (end == 2)
  my_printf("%s\n", CPU_WIN_);
}
