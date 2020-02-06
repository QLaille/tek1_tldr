/*
** enieme_raycast.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/src/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Wed Jan 11 09:15:00 2017 Quentin Laille
** Last update Sat Jan 14 12:12:08 2017 Quentin Laille
*/

#include "wolf3d.h"

float ray_ver(sfVector2f pos, float dir, int **map, sfVector2i mapsize)
{
  float fact;
  float ret;
  float y;
  int x;

  ret = -1;
  if (fmod(dir, 2 / M_PI) == 0)
  return (ret);
  x = 0;
  while (x < mapsize.x)
  {
    fact = (x - pos.x) / cosf(dir);
    if (fact > 0)
    {
      y = pos.y + fact * sinf(dir);
      if (y >= 0 && y < mapsize.y &&
      (map[(int)y][x] == 1 || (x > 0 && map[(int)y][x - 1] == 1)))
      {
        if (ret == -1 || fact < ret)
        ret = fact;
      }
    }
    x += 1;
  }
  return (ret);
}

float ray_hor(sfVector2f pos, float dir, int **map, sfVector2i mapsize)
{
  float fact;
  float ret;
  float x;
  int y;

  ret = -1;
  if (fmod(dir, M_PI) == 0)
  return (ret);
  y = 0;
  while (y < mapsize.y)
  {
    fact = ((float)y - pos.y) / sinf(dir);
    if (fact > 0)
    {
      x = pos.x + fact * cosf(dir);
      if (x >= 0 && x < mapsize.x &&
      (map[y][(int)x] == 1 || (y > 0 && map[y - 1][(int)x] == 1)))
      {
        if (ret == -1 || fact < ret)
        ret = fact;
      }
    }
    y += 1;
  }
  return (ret);
}

float raycast(sfVector2f pos, float dir, int **map, sfVector2i mapsize)
{
  float ret_hor;
  float ret_ver;

  dir = dir * M_PI / 180;
  ret_ver = ray_ver(pos, dir, map, mapsize);
  ret_hor = ray_hor(pos, dir, map, mapsize);
  if (ret_ver < 0 && ret_hor > 0)
  return (ret_hor);
  if (ret_hor < 0 && ret_ver > 0)
  return (ret_ver);
  else
  return (SMALLER(ret_hor, ret_ver));
}
