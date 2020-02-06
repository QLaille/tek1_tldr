/*
** move_forward.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu@epitech.eu>
**
** Started on  Mon Dec 19 08:57:01 2016 Quentin Laille
** Last update Thu Dec 29 17:12:50 2016 Quentin Laille
*/

#include "wolf3d.h"

sfVector2f move_forward(sfVector2f pos, float direction, float distance)
{
  sfVector2f new_pos;

  new_pos.x = pos.x + distance * cosf(direction * M_PI / 180);
  new_pos.y = pos.y + distance * sinf(direction * M_PI / 180);
  return (new_pos);
}
