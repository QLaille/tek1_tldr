/*
** move_backward.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/operate/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Sat Dec 24 13:06:23 2016 Quentin Laille
** Last update Fri Dec 30 17:18:27 2016 Quentin Laille
*/

#include "wolf3d.h"

sfVector2f move_backward(sfVector2f pos, float direction, float distance)
{
  sfVector2f new_pos;

  new_pos.x = pos.x - distance * cosf(direction * M_PI / 180);
  new_pos.y = pos.y - distance * sinf(direction * M_PI / 180);
  return (new_pos);
}
