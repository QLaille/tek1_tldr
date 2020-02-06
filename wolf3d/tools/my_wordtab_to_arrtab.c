/*
** my_wordtab_to_arrtab.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/tools/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Wed Dec 21 19:58:31 2016 Quentin Laille
** Last update Thu Dec 22 14:25:04 2016 Quentin Laille
*/

#include "wolf3d.h"

int **my_wordtab_to_arrtab(char **tab)
{
  int **arr;
  int size_x;
  int size_y;
  int i;
  int j;
  int mem;

  i = 0;
  mem = 0;
  size_x = how_many_var_per_line(tab);
  size_y = how_many_lines(tab);
  arr = my_iaialloc(size_y, size_x);
  while (i < size_y)
  {
    j = 0;
    while (j < size_x)
    {
      if (tab[i][j] == ",")
      arr[]
      j += 1;
    }
    i += 1;
  }
  return (arr);
}
