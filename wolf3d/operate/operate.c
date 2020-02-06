/*
** operate.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/operate/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu@epitech.eu>
**
** Started on  Tue Dec 20 17:30:09 2016 Quentin Laille
** Last update Sun Jan 15 17:11:19 2017 Quentin Laille
*/

#include "wolf3d.h"

static t_keyboard key_mapping[9] =
{
  {sfKeyZ, &move_forward},
  {sfKeyS, &move_backward},
  {sfKeyQ, &move_strafe_left},
  {sfKeyD, &move_strafe_right},
  {sfKeyUp, &move_forward},
  {sfKeyDown, &move_backward},
  {sfKeyLeft, &move_strafe_left},
  {sfKeyRight, &move_strafe_right},
  {'\0', NULL}
};

void camera_mouse(t_sfmlwindow window, t_player *p)
{
  sfVector2i mouse_pos;
  sfVector2i screen_center;
  int dist;

  screen_center.x = SCREEN_WIDTH / 2;
  screen_center.y = SCREEN_HEIGHT / 2;
  mouse_pos = sfMouse_getPosition((sfWindow*)window.window);
  dist = screen_center.x - mouse_pos.x;
  p->direction += (float)dist * p->fov * p->movespeed;
  sfMouse_setPosition(screen_center, (sfWindow*)window.window);
  sfRenderWindow_setMouseCursorVisible(window.window, 0);
}

void keyboard_operate(t_player *p, int **map)
{
  sfVector2f oob;
  int i;

  i = 0;
  while (key_mapping[i].k != '\0')
  {
    if (sfKeyboard_isKeyPressed(key_mapping[i].k) == 1)
    {
      oob = key_mapping[i].move_fnc(p->pos, p->direction, p->movespeed);
      if (map[(int)trunc(oob.y)][(int)trunc(oob.x)] == 0)
      p->pos = key_mapping[i].move_fnc(p->pos, p->direction, p->movespeed);
    }
    i += 1;
  }
}

void operate(t_sfmlwindow window, t_player *p, int **map)
{
  keyboard_operate(p, map);
  camera_mouse(window, p);
}
