/*
** get_size.c for bsq in /CPE_2016_BSQ/functions/parsing
**
** Made by timbus
** Login   <private>
**
** Started on  Tue Dec  6 20:02:21 2016 timbus
** Last update Sat Dec 10 14:36:06 2016 timbus
*/

#include "my_bsq.h"

int	line_length(char *buf)
{
  int	ret;

  ret = 0;
  while (buf[ret] != '\n' && buf[ret] != '\0')
    ret += 1;
  if (buf[ret] == '\0')
    return (-1);
  return (ret);
}

int	col_length(char *buf)
{
  int	ret;

  ret = my_getnbr(buf, 0);
  return (ret);
}

int	get_first_line_length(char *buf)
{
  int	ret;

  ret = 0;
  while (buf[ret] != '\n')
  ret += 1;
  ret += 1;
  return (ret);
}
