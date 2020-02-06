/*
** is_full.c for bsq in /CPE/CPE_2016_BSQ/functions/
**
** Made by timbus
** Login   <private>
**
** Started on  Sat Dec 17 09:17:38 2016 timbus
** Last update Sat Dec 17 09:39:18 2016 timbus
*/

#include "my_bsq.h"

int is_full(char **tab, int size)
{
  int i;
  int j;

  i = 0;
  while (tab[i] != NULL)
  {
    j = 0;
    while (tab[i][j] != '\0')
    {
      if (tab[i][j] != 'o')
      return (0);
      j += 1;
    }
    i += 1;
  }
  return (1);
}
