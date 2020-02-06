/*
** get_par_coords.c for wireframe in /wireframe/projections/parallel
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Mon Nov 21 16:51:56 2016 Quentin Laille
** Last update Thu Nov 24 16:41:07 2016 Quentin Laille
*/

#include "my_wireframe.h"

t_3d_box	plantopar(sfVector3f from, sfVector3f size)
{
  t_3d_box	new;
  float		def_ang;

  def_ang = 45;
  new.front.topL = my_parallel_projection(from, def_ang);
  from.y += size.y;
  new.front.botL = my_parallel_projection(from, def_ang);
  from.x += size.x;
  new.front.botR = my_parallel_projection(from, def_ang);
  from.y -= size.y;
  new.front.topR = my_parallel_projection(from, def_ang);
  from.z += size.z;
  new.back.topL = my_parallel_projection(from, def_ang);
  from.y += size.y;
  new.back.botL = my_parallel_projection(from, def_ang);
  from.x -= size.x;
  new.back.botR = my_parallel_projection(from, def_ang);
  from.y -= size.y;
  new.back.topR = my_parallel_projection(from, def_ang);
  return (new);
}
