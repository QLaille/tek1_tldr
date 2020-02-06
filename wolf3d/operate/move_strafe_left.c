/*
** move_strafe_left.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/operate/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Wed Jan  4 13:03:07 2017 Quentin Laille
** Last update Wed Jan  4 14:54:06 2017 Quentin Laille
*/

#include "wolf3d.h"

sfVector2f move_strafe_left(sfVector2f pos, float dir, float speed)
{
  sfVector2f ret;

  dir += 90;
  ret.x = pos.x + speed * cosf(dir * M_PI / 180);
  ret.y = pos.y + speed * sinf(dir * M_PI / 180);
  return (ret);
}
