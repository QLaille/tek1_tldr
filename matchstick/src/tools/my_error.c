/*
** my_error.c for my_error in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/tools/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Tue Feb 21 10:51:22 2017 Quentin Laille
** Last update Thu Feb 23 16:21:59 2017 Quentin Laille
*/

#include "matchstick.h"

void	my_error(char *msg)
{
  write(1, msg, my_strlen(msg));
  my_printf("\n");
}
