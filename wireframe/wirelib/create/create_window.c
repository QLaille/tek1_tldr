/*
** create_window.c for wireframe in /B1-MUL/wireframe/create
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Thu Nov 24 16:10:48 2016 Quentin Laille
** Last update Thu Nov 24 16:35:35 2016 Quentin Laille
*/

#include "my_wireframe.h"

sfRenderWindow*		create_window(char *name, int width, int height)
{
  sfRenderWindow*	window;
  sfVideoMode		mode;

  mode.width = width;
  mode.height = height;
  mode.bitsPerPixel = 32;
  window = sfRenderWindow_create(mode, name, sfResize | sfClose, NULL);
  if (window == NULL)
    exit(84);
  return (window);
}
