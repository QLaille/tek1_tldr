/*
** my_draw_line.c for bswireframe in /B1-CGP/bswireframe
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Wed Nov 16 16:21:10 2016 Quentin Laille
** Last update Tue Jan 24 10:57:22 2017 Quentin Laille
*/

#include "wolf3d.h"

void  my_draw_line(t_my_framebuffer* framebuffer, sfVector2i from,
		     sfVector2i to, sfColor color)
{
	sfVector2f delta;
	sfVector2f pix;
  float	length;
  int	cursor;

  if (ABS(to.x - from.x) >= ABS(to.y - from.y))
	length = ABS(to.x - from.x);
  else
	length = ABS(to.y - from.y);
  delta.x = (to.x - from.x) / length;
  delta.y = (to.y - from.y) / length;
  pix.y = from.x + 0.5;
  pix.x = from.y + 0.5;
	cursor = 0;
	while (cursor < length)
	{
		my_put_pixel(framebuffer, (int)pix.x, (int)pix.y, color);
		pix.y += delta.x;
		pix.x += delta.y;
		cursor += 1;
	}
}
