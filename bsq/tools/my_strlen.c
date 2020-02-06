/*
** my_strlen.c for my_strlen.c in /home/private/CPool/CPool_Day04
**
** Made by timbus
** Login   <private>
**
** Started on  Thu Oct  6 13:22:05 2016 timbus
** Last update Thu Dec  8 14:03:57 2016 timbus
*/

#include "my_bsq.h"

int	my_strlen(char *str)
{
  int	cur;

  cur = 0;
  while (str[cur] != '\0')
    cur += 1;
  return (cur);
}
