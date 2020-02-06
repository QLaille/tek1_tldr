/*
** my_draw_rectangle.c for wireframe in /wireframe/2d_functions
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Fri Nov 18 16:30:24 2016 Quentin Laille
** Last update Sat Dec 10 14:05:11 2016 Laille
*/

#include "my_wireframe.h"

void	par_draw_rect(t_my_framebuffer* buffer, t_2d_rect rect, sfColor color)
{
  my_draw_line(buffer, rect.topL, rect.botL, color);
  my_draw_line(buffer, rect.botL, rect.botR, color);
  my_draw_line(buffer, rect.botR, rect.topR, color);
  my_draw_line(buffer, rect.topL, rect.topR, color);
}

void	iso_draw_rect(t_my_framebuffer* buffer, t_2d_rect rect, sfColor color)
 {
   my_draw_line(buffer, rect.topL, rect.botL, color);
   my_draw_line(buffer, rect.botL, rect.botR, color);
   my_draw_line(buffer, rect.botR, rect.topR, color);
   my_draw_line(buffer, rect.topL, rect.topR, color);
 }
