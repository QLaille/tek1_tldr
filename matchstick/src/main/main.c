/*
** main.c for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Thu Feb 16 11:00:23 2017 Quentin Laille
** Last update Tue Feb 21 11:22:54 2017 Quentin Laille
*/

#include "matchstick.h"

int	main(int ac, char **av)
{
  if (ac != 3)
  {
    my_error(ERR_ARGS);
    return (84);
  }
  else
  return (matchstick(av[1], av[2]));
}
