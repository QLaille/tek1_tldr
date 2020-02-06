/*
** get_tab_arr.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/parsing/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Thu Dec 22 14:35:57 2016 Quentin Laille
** Last update Tue Dec 27 12:57:42 2016 Quentin Laille
*/

#include "wolf3d.h"

int	**get_tab_arr(char *str, sfVector2i mapsize)
{
  int	**tab;
  int	nb;
  int	i;

  i = 0;
  nb = count_nb(str);
  tab = malloc(sizeof(int*) * mapsize.y);
  while (i < mapsize.y)
    {
      tab[i] = get_in_arr(str, ((mapsize.x + 1) * i), nb);
      i += 1;
    }
  return (tab);
}
