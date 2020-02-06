/*
** cam_rotate_left.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/operate/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Sat Dec 24 13:11:58 2016 Quentin Laille
** Last update Wed Jan  4 11:36:20 2017 Quentin Laille
*/

#include "wolf3d.h"

float cam_rotate_left(float direction, float speed, float fov)
{
  float ret;

  ret = direction + speed * fov;
  return (ret);
}
