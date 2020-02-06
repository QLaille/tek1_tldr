/*
** my_getnbr.c for libmy in /home/QuentinLaille/CPool/CPool_Day04
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Thu Oct  6 17:38:55 2016 Quentin Laille
** Last update Sun Nov 27 15:14:07 2016 Quentin Laille
*/

#include "my.h"
#include <unistd.h>

int	check_number(char *str)
{
  int	x;

  x = 0;
  while (str[x] != '\0')
    {
      if ((str[x] < 48) || (str[x] > 57))
	{
	  if (str[x] != 45)
	    return (84);
	}
      x += 1;
    }
  return (0);
}

int	is_negative(char *str)
{
  if (str[0] == '-')
    return (-1);
  return (1);
}

int	is_next_number(char *str)
{
  int	ret;
  int	x;

  x = 0;
  if (str[x] == 45)
    x = 1;
  ret = 0;
  while (str[x] != '\0')
    {
      ret = ret * 10 + (str[x] - 48);
      x += 1;
    }
  return (ret);
}

int	my_getnbr(char *str)
{
  int	is_neg;
  int	final_number;

  if (check_number(str) == 84)
    return (0);
  is_neg = is_negative(str);
  final_number = is_next_number(str);
  final_number = final_number * is_neg;
  return (final_number);
}
