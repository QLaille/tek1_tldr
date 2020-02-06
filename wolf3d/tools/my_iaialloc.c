/*
** my_iaialloc.c for wolf3d in /home/anteron/Tek1/MUL/wolf3d/tools/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Wed Dec 21 20:00:01 2016 Quentin Laille
** Last update Wed Dec 21 21:29:33 2016 Quentin Laille
*/

#include "wolf3d.h"

int **my_iaialloc(int y, int x)
{
  int **tab;
  int i;

  i = 0;
  tab = malloc(sizeof(int*) * y);
  while (i < y)
  {
    tab[i] = my_ialloc(x);
    i += 1;
  }
  return (tab);
}
