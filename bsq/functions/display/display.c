/*
** display.c for bsq in /CPE_2016_BSQ/functions/display
**
** Made by timbus
** Login   <private>
**
** Started on  Tue Dec  6 16:38:10 2016 timbus
** Last update Sun Dec 18 16:21:11 2016 timbus
*/

#include "my_bsq.h"

void	display(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      my_printf("%s\n", tab[i]);
      i += 1;
    }
}
