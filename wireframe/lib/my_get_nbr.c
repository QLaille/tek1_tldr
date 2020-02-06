/*
** my_get_nbr.c for wireframe in /B1-MUL/wireframe
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Tue Dec  6 15:21:16 2016 Quentin Laille
** Last update Tue Dec  6 15:22:17 2016 Quentin Laille
*/

#include "my_wireframe.h"

int     my_get_nbr(char *str)
{
  int   cur;
  int   ret;

  ret = 0;
  cur = 0;
  while (str[cur] != '\0')
    {
      ret = ret * 10 + (str[cur] - 48);
      cur += 1;
    }
  return (ret);
}
