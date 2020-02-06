/*
** get_data.c<tools> for wireframe in /wireframe/tools
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Wed Dec  7 13:53:34 2016 Quentin Laille
** Last update Sun Jan 15 16:52:39 2017 Quentin Laille
*/

#include "wolf3d.h"

char	*get_file(char *fp, int length)
{
  char	*buf;
  int	fd;

  buf = my_calloc(length);
  fd = open(fp, O_RDONLY);
  if (read(fd, buf, length) == 0)
  return (NULL);
  close(fd);
  return (buf);
}
