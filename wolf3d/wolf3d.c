/*
** wolf3d.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu@epitech.eu>
**
** Started on  Mon Dec 19 08:49:30 2016 Quentin Laille
** Last update Sun Jan 15 17:10:48 2017 Quentin Laille
*/

#include "wolf3d.h"

void wolf_free(t_map map)
{
  int i;

  i = 0;
  while (i < map.mapsize.y)
  {
    free(map.map[i]);
    i += 1;
  }
  free(map.map);
}

void gameloop(t_map map, t_player player)
{
  t_sfmlwindow window;
  sfEvent event;

  window = init();
  while (sfRenderWindow_isOpen(window.window))
  {
    operate(window, &player, map.map);
    display(window, map, player);
    sfRenderWindow_pollEvent(window.window, &event);
    if (event.key.code == sfKeyEscape)
    sfRenderWindow_close(window.window);
  }
  sfRenderWindow_destroy(window.window);
}

int main(int ac, char **av)
{
  t_player player;
  t_map map;

  if (ac != 2)
  return (84);
  map = parse_this(av[1]);
  if (map.map == NULL)
  return (84);
  player = init_player(map);
  gameloop(map, player);
  wolf_free(map);
  return (0);
}
