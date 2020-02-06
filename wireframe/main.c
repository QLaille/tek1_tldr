/*
** test_parallel_rectangle.c for wireframe_test in /wireframe/test
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Mon Nov 21 21:49:24 2016 Quentin Laille
** Last update Sat Dec 10 00:30:20 2016 Laille
*/

#include "my_wireframe.h"

t_sfmldata		init()
{
  t_sfmldata		init;
  sfEvent		event;

  init.window = create_window("Fancy Wireframe", SCREEN_WIDTH, SCREEN_HEIGHT);
  init.sprite = sfSprite_create();
  init.texture = sfTexture_create(SCREEN_WIDTH, SCREEN_HEIGHT);
  init.framebuffer = my_framebuffer_create(SCREEN_WIDTH, SCREEN_HEIGHT);
  init.input = event;
  init.mode = 1;
  sfSprite_setTexture(init.sprite, init.texture, sfTrue);
  return (init);
}

int			main(int ac, char **av)
{
  t_sfmldata		window;
  sfVector2i		grid;
  t_input		data;

  if (ac != 2)
    return (84);
  data = parse_this(av[1]);
  grid.x = data.size_x - 1;
  grid.y = data.size_y - 1;
  window = init();
  while (sfRenderWindow_isOpen(window.window))
    {
      sfRenderWindow_clear(window.window, sfBlack);
      sfRenderWindow_drawSprite(window.window, window.sprite, NULL);
      sfRenderWindow_display(window.window);
      sfRenderWindow_pollEvent(window.window, &window.input);
      my_draw_grid(window, data.array, grid, sfRed);
      sfTexture_updateFromPixels(window.texture, (window.framebuffer)->pixels,
				 SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0);
      if (window.input.key.code == sfKeyEscape)
	sfRenderWindow_close(window.window);
    }
  sfRenderWindow_destroy(window.window);
  return (0);
}
