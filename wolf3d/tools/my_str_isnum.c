/*
** my_str_isnum.c for my_str_isnum.c in /home/QuentinLaille/CPool/CPool_Day06
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Mon Oct 10 17:31:24 2016 Quentin Laille
** Last update Mon Dec  5 13:42:13 2016 Quentin Laille
*/

#include "wolf3d.h"

int	is_num(char c)
{
  if ((c < 48) || (c > 57))
    return (0);
  return (1);
}
