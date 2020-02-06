/*
** create_pixelbuffer.c for wireframe in /B1-MUL/wireframe/create
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Thu Nov 24 16:16:50 2016 Quentin Laille
** Last update Thu Nov 24 16:35:23 2016 Quentin Laille
*/

#include "my_wireframe.h"

sfUint8*	my_pixelbuffer_create(int w, int h)
{
  sfUint8*	new;
  int		i;

  new = malloc(w *h *4 *sizeof(sfUint8*));
  if (new == NULL)
    exit (84);
  i = 0;
  while (i < w * h * 4)
    {
      new[i] = 0;
      i += 1;
    }
  return (new);
}
