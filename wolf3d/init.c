/*
** init.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Wed Dec 21 11:09:02 2016 Quentin Laille
** Last update Sun Jan 15 16:45:35 2017 Quentin Laille
*/

#include "wolf3d.h"

sfRenderWindow*		create_window(char *name, int width, int height)
{
  sfRenderWindow*	window;
  sfVideoMode		mode;

  mode.width = width;
  mode.height = height;
  mode.bitsPerPixel = 32;
  window = sfRenderWindow_create(mode, name, sfResize | sfClose, NULL);
  sfRenderWindow_setKeyRepeatEnabled(window, 1);
  if (window == NULL)
    exit(84);
  return (window);
}

sfUint8*	my_pixelbuffer_create(int w, int h)
{
  sfUint8*	new;
  int		i;

  new = malloc(w *h *4 *sizeof(sfUint8));
  if (new == NULL)
    exit (84);
  i = 0;
  while (i < w * h * 4)
    {
      new[i] = 0;
      i += 1;
    }
  return (new);
}

t_my_framebuffer*	my_framebuffer_create(int w, int h)
{
  t_my_framebuffer*	new;

  new = malloc(sizeof(t_my_framebuffer));
  new->width = w;
  new->height = h;
  new->pixels = my_pixelbuffer_create(w, h);
  return (new);
}

t_sfmlwindow init()
{
  t_sfmlwindow ret;

  ret.window = create_window("Wolf", SCREEN_WIDTH, SCREEN_HEIGHT);
  ret.sprite = sfSprite_create();
  ret.texture = sfTexture_create(SCREEN_WIDTH, SCREEN_HEIGHT);
  ret.framebuffer = my_framebuffer_create(SCREEN_WIDTH, SCREEN_HEIGHT);
  sfSprite_setTexture(ret.sprite, ret.texture, sfTrue);
  return (ret);
}

t_player init_player()
{
  t_player ret;

  ret.direction = 0;
  ret.fov = 90;
  ret.movespeed = 0.01;
  ret.pos.x = 1.5;
  ret.pos.y = 1.5;
  return (ret);
}
