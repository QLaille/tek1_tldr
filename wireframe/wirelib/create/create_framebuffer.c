/*
** create_framebuffer.c for wireframe in /B1-MUL/wireframe/create
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Thu Nov 24 16:14:04 2016 Quentin Laille
** Last update Thu Nov 24 16:15:49 2016 Quentin Laille
*/

#include "my_wireframe.h"

t_my_framebuffer*	my_framebuffer_create(int w, int h)
{
  t_my_framebuffer*	new;

  new = malloc(sizeof(t_my_framebuffer*));
  new->width = w;
  new->height = h;
  new->pixels = my_pixelbuffer_create(w, h);
  return (new);
}
