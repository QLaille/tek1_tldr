/*
** parse_this.c for wireframe in /wireframe/tools
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Wed Dec  7 13:49:48 2016 Quentin Laille
** Last update Sun Jan 15 16:54:36 2017 Quentin Laille
*/

#include "wolf3d.h"

t_map		new_data()
{
  t_map	ret;

  ret.mapsize.x = 0;
  ret.mapsize.y = 0;
  ret.map = NULL;
  return (ret);
}

t_map		parse_this(char *fp)
{
  t_map	ret;
  char	*buf;
  int		length;

  ret = new_data();
  length = get_length(fp);
  buf = get_file(fp, length);
  if (buf != NULL)
  {
    ret.mapsize.x = line_length(buf);
    ret.mapsize.y = col_length(buf);
    ret.map = get_tab_arr(buf, ret.mapsize);
    ret.mapsize.x = count_nb(buf);
    return (ret);
  }
  ret.map = NULL;
  return (ret);
}
