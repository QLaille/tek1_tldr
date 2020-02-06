/*
** refresh.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu@epitech.eu>
**
** Started on  Tue Dec 20 13:55:38 2016 Quentin Laille
** Last update Tue Dec 20 14:04:00 2016 Quentin Laille
*/

#include "wolf3d.h"

void refresh(t_sfmlwindow window)
{
  sfRenderWindow_clear(window.window, sfBlack);
  sfRenderWindow_drawSprite(window.window, window.sprite, NULL);
  sfRenderWindow_display(window.window);
  sfTexture_updateFromPixels(window.texture, window.framebuffer->pixels,
   SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0);
}
