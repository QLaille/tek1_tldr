/*
** display.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu@epitech.eu>
**
** Started on  Tue Dec 20 14:04:10 2016 Quentin Laille
** Last update Sun Jan 15 16:37:55 2017 Quentin Laille
*/

#include "wolf3d.h"

void display(t_sfmlwindow window, t_map map, t_player player)
{
  sfRenderWindow_clear(window.window, sfBlack);
  sfRenderWindow_drawSprite(window.window, window.sprite, NULL);
  sfRenderWindow_display(window.window);
  render_camera(window, map, player);
  sfTexture_updateFromPixels(window.texture, window.framebuffer->pixels,
   SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0);
}
