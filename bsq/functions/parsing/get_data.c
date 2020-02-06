/*
** get_data.c for bsq in /CPE_2016_BSQ/functions/parsing
**
** Made by timbus
** Login   <private>
**
** Started on  Tue Dec  6 19:49:07 2016 timbus
** Last update Sat Dec 10 14:35:16 2016 timbus
*/

#include "my_bsq.h"

t_data		new_data()
{
  t_data	new;

  new.size_x = 0;
  new.size_y = 0;
  new.tab = NULL;
  return (new);
}

t_data		get_data(char *fp)
{
  t_data	new;
  char		*buf;
  int		len;
  int		temp;

  temp = 0;
  new = new_data();
  len = get_length(fp);
  buf = get_file(fp, len);
  temp = get_first_line_length(buf);
  new.size_y = col_length(buf);
  new.size_x = line_length(buf + temp);
  new.tab = my_str_to_wordtab(buf + temp);
  free(buf);
  return (new);
}
