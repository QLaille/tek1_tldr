/*
** get_next_line_2.c for gnl in /home/anteron/Tek1/CPE/CPE_2016_getnextline/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Fri Jan  6 11:18:57 2017 Quentin Laille
** Last update Fri Jan  6 15:55:12 2017 Quentin Laille
*/

#include "get_next_line.h"

char	*my_calloc(int size)
{
  char	*ret;
  int	i;

  i = 0;
  ret = malloc(sizeof(char) * (size + 1));
  while (i < (size + 1))
    {
      ret[i] = '\0';
      i += 1;
    }
  return (ret);
}

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    i += 1;
  while (j < nb)
    {
      dest[i] = src[j];
      j += 1;
      i += 1;
    }
  dest[i] = '\0';
  return (dest);
}

char *get_next_line(const int fd)
{
  static char *buf = NULL;
  static int char_left = 0;
  char *line;
  int cur;

  if (char_left == 0)
  {
    buf = malloc(sizeof(char) * READ_SIZE);
    char_left = read(fd, buf, READ_SIZE);
  }
  line = NULL;
  if (char_left > 0)
  {
    cur = 0;
    while (buf[cur] != '\0' && buf[cur] != '\n' && buf != NULL)
    cur += 1;
    buf[cur] = '\0';
    line = my_calloc(cur);
    line = my_strncat(line, buf, cur);
    cur += 1;
    char_left -= cur;
    buf += cur;
  }
  return (line);
}
