/*
** parallel.c for bswireframe in /B1-MUL/bswireframe/projections
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Fri Nov 18 11:43:20 2016 Quentin Laille
** Last update Fri Dec  9 22:39:17 2016 Laille
*/

#include "my_wireframe.h"

sfVector2i	my_parallel_projection(sfVector3f input, float angle)
{
  sfVector2i	new;
  float		rad;

  rad = (angle * M_PI / 180.0);
  new.x = input.x - (input.y * cosf(rad));
  new.y = (input.y * cosf(rad)) - input.z;
  return (new);
}
