/*
** draw_wall.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/display/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu@epitech.eu>
**
** Started on  Tue Dec 20 18:12:51 2016 Quentin Laille
** Last update Fri Jan 13 11:33:15 2017 Quentin Laille
*/

#include "wolf3d.h"

void render_camera(t_sfmlwindow window, t_map map, t_player player)
{
  float angle_l;
  float angle_r;
  float dist;
  float step;
  int ray;

  ray = 0;
  step = player.fov / SCREEN_WIDTH;
  angle_l = player.direction + (player.fov / 2);
  angle_r = player.direction - (player.fov / 2);
  while (ray <= SCREEN_WIDTH / 2)
  {
    dist = raycast(player.pos, angle_l, map.map, map.mapsize);
    dist = dist * cosf(ABS(angle_l - player.direction) * M_PI / 180);
    draw_ray(window, ray, dist);
    angle_l -= step;
    dist = raycast(player.pos, angle_r, map.map, map.mapsize);
    dist = dist * cosf(ABS(angle_r - player.direction) * M_PI / 180);
    draw_ray(window, SCREEN_WIDTH - ray, dist);
    angle_r += step;
    ray += 1;
  }
}
