/*
** get_size.c for wireframe in /wireframe/test
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Tue Dec  6 15:31:08 2016 Quentin Laille
** Last update Thu Dec 22 14:35:05 2016 Quentin Laille
*/

#include "wolf3d.h"

int	get_length(char *fp)
{
  int	fd;
  char	*buf;
  int	size;

  size = 0;
  buf = my_calloc(1024);
  fd = open(fp, O_RDONLY);
  while ((read(fd, buf, 1024) != 0))
      size += my_strlen(buf);
  close(fd);
  free(buf);
  return  (size);
}

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
