/*
** my_draw_line.c for bswireframe in /B1-CGP/bswireframe
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Wed Nov 16 16:21:10 2016 Quentin Laille
** Last update Sat Dec 10 14:14:43 2016 Laille
*/

#include "my_wireframe.h"

void  my_draw_line(t_my_framebuffer* buffer, sfVector2i from,
		     sfVector2i to, sfColor color)
{
	float	dx;
	float	dy;
	float	x;
  float	y;
  float	length;
  int	cursor;

  if ((to.x - from.x) >= (to.y - from.y))
    length = ABS(to.x - from.x);
  else
    length = ABS(to.y - from.y);
  dx = (to.x - from.x) / length;
  dy = (to.y - from.y) / length;
  x = from.x + 0.5;
  y = from.y + 0.5;
	cursor = 1;
	while (cursor <= length)
    {
      my_put_pixel(buffer, x, y, color);
      x += dx;
      y += dy;
      cursor += 1;
    }
}
