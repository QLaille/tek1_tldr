/*
** create_rect.c for wireframe in /wireframe/create
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Sat Nov 26 12:33:36 2016 Quentin Laille
** Last update Sat Dec 10 00:11:37 2016 Laille
*/

#include "my_wireframe.h"

t_2d_rect	par_base(sfVector3f from)
{
  t_2d_rect	new;
  int		angle;

  angle = 45;
  new.topL = my_parallel_projection(from, angle);
  from.y += 100.0;
  new.botL = my_parallel_projection(from, angle);
  from.x += 100.0;
  new.botR = my_parallel_projection(from, angle);
  from.y -= 100.0;
  new.topR = my_parallel_projection(from, angle);
  return (new);
}

t_2d_rect	par_top(int **tab, int x, int y, sfVector3f from)
{
  t_2d_rect	new;
  int		angle;

  angle = 45;
  from.z = (tab[y][x]) * 10;
  new.topL = my_parallel_projection(from, angle);
  from.y += 100.0;
  from.z = (tab[y + 1][x]) * 10;
  new.botL = my_parallel_projection(from, angle);
  from.x += 100.0;
  from.z = (tab[y + 1][x + 1]) * 10;
  new.botR = my_parallel_projection(from, angle);
  from.y -= 100.0;
  from.z = (tab[y][x + 1]) * 10;
  new.topR = my_parallel_projection(from, angle);
  return (new);
}

t_2d_rect	iso_base(sfVector3f from)
{
  t_2d_rect	new;
  int		angle;

  angle = 45;
  new.topL = my_parallel_projection(from, angle);
  from.y += 100.0;
  new.botL = my_parallel_projection(from, angle);
  from.x += 100.0;
  new.botR = my_parallel_projection(from, angle);
  from.y -= 100.0;
  new.topR = my_parallel_projection(from, angle);
  return (new);
}

t_2d_rect	iso_top(int **tab, int x, int y, sfVector3f from)
{
  t_2d_rect	new;

  from.z = (tab[y][x]) * 10;
  new.topL = my_isometric_projection(from);
  from.y += 100.0;
  from.z = (tab[y + 1][x]) * 10;
  new.botL = my_isometric_projection(from);
  from.x += 100.0;
  from.z = (tab[y + 1][x + 1]) * 10;
  new.botR = my_isometric_projection(from);
  from.y -= 100.0;
  from.z = (tab[y][x + 1]) * 10;
  new.topR = my_isometric_projection(from);
  return (new);
}
