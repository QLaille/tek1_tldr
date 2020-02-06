/*
** my_draw_box.c for wireframe in /wireframe/3d_functions
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Thu Nov 24 14:00:18 2016 Quentin Laille
** Last update Fri Dec  9 23:56:59 2016 Laille
*/

#include "my_wireframe.h"

void	par_draw_box(t_my_framebuffer* buffer, t_3d_box box, sfColor color)
{
  par_draw_rect(buffer, box.front, color);
  par_draw_rect(buffer, box.back, sfWhite);
  my_draw_line(buffer, box.back.topL, box.front.topL, sfWhite);
  my_draw_line(buffer, box.back.topR, box.front.topR, sfWhite);
  my_draw_line(buffer, box.back.botL, box.front.botL, sfWhite);
  my_draw_line(buffer, box.back.botR, box.front.botR, sfWhite);
}

void	iso_draw_box(t_my_framebuffer* buffer, t_3d_box box, sfColor color)
{
  iso_draw_rect(buffer, box.front, color);
  iso_draw_rect(buffer, box.back, sfWhite);
  my_draw_line(buffer, box.back.topL, box.front.topL, sfWhite);
  my_draw_line(buffer, box.back.topR, box.front.topR, sfWhite);
  my_draw_line(buffer, box.back.botL, box.front.botL, sfWhite);
  my_draw_line(buffer, box.back.botR, box.front.botR, sfWhite);
}
