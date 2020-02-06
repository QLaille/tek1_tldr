/*
** my_draw_grid.c for wireframe in /wireframe/2d_functions
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Thu Nov 24 16:47:10 2016 Quentin Laille
** Last update Sat Dec 10 00:23:04 2016 Laille
*/

#include "my_wireframe.h"

t_3d_box	par_attribute(int **tab, int x, int y, sfVector3f from)
{
  t_3d_box	new;

  new.front = par_base(from);
  new.back = par_top(tab, x, y, from);
  return (new);
}

t_3d_box	iso_attribute(int **tab, int x, int y, sfVector3f from)
{
  t_3d_box	new;

  new.front = iso_base(from);
  new.back = iso_top(tab, x, y, from);
  return (new);
}
void		draw_parallel_box(t_sfmldata data, int **tab,
              sfVector2i grid_size, sfColor color)
 {
     sfVector2i	where;
     sfVector3f	from;
     t_3d_box	box;

     where.x = 0;
     where.y = 0;
     from.x = SCREEN_WIDTH / 2;
     from.y = SCREEN_HEIGHT / 2;
     from.z = 0;
     while (where.y < grid_size.y)
       {
         while (where.x < grid_size.x)
	   {
	     box = par_attribute(tab, where.x, where.y, from);
	     par_draw_box(data.framebuffer, box, color);
	     from.x += 100;
	     where.x += 1;
	   }
         where.x = 0;
         from.x = SCREEN_WIDTH / 2;
         where.y += 1;
         from.y += 100;
       }
}

void		draw_isometric_box(t_sfmldata data, int **tab,
                    sfVector2i grid_size, sfColor color)
{
  sfVector2i	where;
  sfVector3f	from;
  t_3d_box	box;

  where.x = 0;
  where.y = 0;
  from.x = SCREEN_WIDTH / 2;
  from.y = SCREEN_HEIGHT / 2;
  from.z = 0;
  while (where.y < grid_size.y)
    {
      while (where.x < grid_size.x)
	{
	  box = iso_attribute(tab, where.x, where.y, from);
	  iso_draw_box(data.framebuffer, box, color);
	  from.x += 100;
	  where.x += 1;
	}
      where.x = 0;
      from.x = SCREEN_WIDTH / 2;
      where.y += 1;
      from.y += 100;
    }
}

void		my_draw_grid(t_sfmldata data, int **tab,
			     sfVector2i grid_size, sfColor color)
{
  if (data.mode == 1)
    draw_parallel_box(data, tab, grid_size, color);
  else if (data.mode == 0)
    draw_isometric_box(data, tab, grid_size, color);
}
