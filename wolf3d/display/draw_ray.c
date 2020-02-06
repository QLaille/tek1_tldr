/*
** draw_ray.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/display/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Fri Dec 30 19:29:31 2016 Quentin Laille
** Last update Thu Jan 12 09:08:38 2017 Quentin Laille
*/

#include "wolf3d.h"

sfColor new_color(int r, int g, int b)
{
  sfColor ret;

  ret.r = r;
  ret.g = g;
  ret.b = b;
  ret.a = 255;
  return (ret);
}

void draw_ray(t_sfmlwindow window, int ray, float dist)
{
  sfVector2i from;
  sfVector2i to;
  int size;
  int x;

  x = 0;
  to.y = ray;
  from.y = ray;
  size = (int)(SCREEN_HEIGHT / dist);
  to.x = (size / 2) + (SCREEN_HEIGHT / 2);
  from.x = - (size / 2) + (SCREEN_HEIGHT / 2);
  my_draw_line(window.framebuffer, from, to, new_color(80, 80, 80));
  while (x < from.x)
  {
    my_put_pixel(window.framebuffer, ray, x, new_color(66, 33, 99));
    x += 1;
  }
  x = SCREEN_HEIGHT;
  while (x > to.x)
  {
    my_put_pixel(window.framebuffer, ray, x, sfBlue);
    x -= 1;
  }
}
