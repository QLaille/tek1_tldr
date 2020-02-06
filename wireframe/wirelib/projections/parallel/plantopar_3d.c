/*
** get_par_coords.c for wireframe in /wireframe/projections/parallel
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Mon Nov 21 16:51:56 2016 Quentin Laille
** Last update Fri Dec  9 22:40:25 2016 Laille
*/

#include "my_wireframe.h"

t_3d_box	plantopar_3d(sfVector3f from, sfVector3f size, float angle)
{
  t_3d_box	new;

  new.front.topL = my_parallel_projection(from, angle);
  from.y += size.y;
  new.front.botL = my_parallel_projection(from, angle);
  from.x += size.x;
  new.front.botR = my_parallel_projection(from, angle);
  from.y -= size.y;
  new.front.topR = my_parallel_projection(from, angle);
  from.z += size.z;
  new.back.topL = my_parallel_projection(from, angle);
  from.y += size.y;
  new.back.botL = my_parallel_projection(from, angle);
  from.x -= size.x;
  new.back.botR = my_parallel_projection(from, angle);
  from.y -= size.y;
  new.back.topR = my_parallel_projection(from, angle);
  return (new);
}
