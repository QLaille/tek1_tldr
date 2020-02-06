/*
** isometric.c for bswireframe in /bswireframe/projections
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Fri Nov 18 15:18:42 2016 Quentin Laille
** Last update Fri Nov 18 15:24:35 2016 Quentin Laille
*/

#include "my_wireframe.h"

sfVector2i	my_isometric_projection(sfVector3f pos3d)
{
  sfVector2i	new;
  float		rad;

  rad = (30.0 * M_PI / 180.0);
  new.x = (pos3d.x * cosf(rad)) - (pos3d.y * cosf(rad));
  new.y = (sinf(rad) * pos3d.x) - (sinf(rad) * pos3d.y) - pos3d.z;
  return (new);
}
