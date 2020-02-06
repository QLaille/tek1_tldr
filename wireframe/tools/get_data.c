/*
** get_data.c<tools> for wireframe in /wireframe/tools
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Wed Dec  7 13:53:34 2016 Quentin Laille
** Last update Wed Dec  7 14:31:55 2016 Quentin Laille
*/

#include "my_wireframe.h"

int	extract_line(char *str, int from, int to)
{
  char	*nbr;
  int	i;

  i = 0;
  if (str[from] == ',')
    from += 1;
  nbr = my_calloc(to - from + 1);
  while (from < to)
    {
      nbr[i] = str[from];
      from += 1;
    }
  return (my_get_nbr(nbr));
}

int	*get_in_arr(char *str, int cur, int size)
{
  int	*ret;
  int	i;
  int	mem;

  mem = 0;
  ret = my_ialloc(size);
  i = 0;
  while (str[cur] != '\n')
    {
      if (str[cur] == ',')
	{
	  ret[i] = extract_line(str, mem, cur);
	  i += 1;
	  mem = cur;
	}
      cur += 1;
    }
  if (str[cur - 1] != ',')
    ret[i] = extract_line(str, mem, cur);
  return (ret);
}

int	**get_tab_arr(char *str, int y_size, int x_size)
{
  int	**tab;
  int	nb;
  int	i;

  i = 0;
  nb = count_nb(str);
  tab = malloc(sizeof(int *) * y_size);
  while (i < y_size)
    {
      tab[i] = get_in_arr(str, ((x_size + 1) * i), nb);
      i += 1;
    }
  return (tab);
}

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
