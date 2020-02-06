/*
** my_put_pixel.c for bswireframe in /B1-MUL/bswireframe
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Thu Nov 17 16:00:31 2016 Quentin Laille
** Last update Sat Jan 14 18:57:57 2017 Quentin Laille
*/

#include "wolf3d.h"

void	my_put_pixel(t_my_framebuffer* fb, int x, int y, sfColor color)
{
  if (x >= 0 && y >= 0 && y <= fb->height && x <= fb->width)
    {
      fb->pixels[(fb->width * y + x) * 4 + 0] = color.r;
      fb->pixels[(fb->width * y + x) * 4 + 1] = color.g;
      fb->pixels[(fb->width * y + x) * 4 + 2] = color.b;
      fb->pixels[(fb->width * y + x) * 4 + 3] = color.a;
    }
}
