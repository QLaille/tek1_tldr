/*
** main.c for quicksort in /CPE_2016_Pushswap/counting_sort
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Tue Nov 15 15:51:53 2016 Quentin Laille
** Last update Thu Nov 24 13:55:06 2016 Quentin Laille
*/

#include "my.h"


int	*get_array(int ac, char **av)
{
  int	*new;
  int	x;

  x = 1;
  new = malloc(sizeof(int *) * ac);
  while (x < ac)
    {
      new[x - 1] = my_getnbr(av[x]);
      x += 1;
    }
  return (new);
}

t_array		*init(int ac, char **av)
{
  t_array	*new;

  new = malloc(sizeof(t_array *));
  new->array = get_array(ac, av);
  new->first = 1;
  new->size = ac - 1;
  new->cursor = 0;
  return (new);
}

int		main(int ac, char **av)
{
  t_array	*data;
  int		x;

  x = ac - 2;
  data = init(ac, av);
  quicksort(data, 0, x);
  calibrate(data, 0);
  my_printf("\n");
  return (0);
}
