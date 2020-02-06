/*
** parse_this.c for wireframe in /wireframe/tools
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Wed Dec  7 13:49:48 2016 Quentin Laille
** Last update Thu Dec  8 08:28:49 2016 Quentin Laille
*/

#include "my_wireframe.h"

t_input		new_data()
{
  t_input	ret;

  ret.size_x = 0;
  ret.size_y = 0;
  ret.array = NULL;
  return (ret);
}

t_input		parse_this(char *fp)
{
  t_input	ret;
  char		*buf;
  int		length;

  ret = new_data();
  length = get_length(fp);
  buf = get_file(fp, length);
  ret.size_x = line_length(buf);
  ret.size_y = col_length(buf);
  ret.array = get_tab_arr(buf, ret.size_y, ret.size_x);
  ret.size_x = count_nb(buf);
  return (ret);
}
