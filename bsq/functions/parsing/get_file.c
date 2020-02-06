/*
** get_file.c for bsq in /CPE_2016_BSQ/functions/parsing
**
** Made by timbus
** Login   <private>
**
** Started on  Tue Dec  6 20:11:00 2016 timbus
** Last update Wed Dec 14 16:33:27 2016 timbus
*/

#include "my_bsq.h"

int	get_length(char *fp)
{
  int	fd;
  char	*buf;
  int	ret;

  ret = 0;
  buf = my_calloc(1024);
  fd = open(fp, O_RDONLY);
  while ((read(fd, buf, 1024) != 0))
    ret += my_strlen(buf);
  close(fd);
  free(buf);
  return (ret);
}

char	*get_file(char *fp, int length)
{
  char	*buf;
  int	fd;

  buf = my_calloc(length);
  fd = open(fp, O_RDONLY);
  read(fd, buf, length);
  close(fd);
  return (buf);
}
