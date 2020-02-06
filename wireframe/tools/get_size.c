/*
** get_size.c for wireframe in /wireframe/test
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Tue Dec  6 15:31:08 2016 Quentin Laille
** Last update Tue Dec  6 15:32:21 2016 Quentin Laille
*/

#include "my_wireframe.h"

int	line_length(char *buf)
{
  int	cur;

  cur = 0;
  while (buf[cur] != '\n' && buf[cur] != '\0')
    cur += 1;
  if (buf[cur] == '\0')
    return (-1);
  return (cur);
}

int	col_length(char *buf)
{
  int	cur;
  int	ret;

  ret = 0;
  cur = 0;
  while (buf[cur] != '\0')
    {
      if (buf[cur] == '\n')
	ret += 1;
      cur += 1;
    }
  return (ret);
}
