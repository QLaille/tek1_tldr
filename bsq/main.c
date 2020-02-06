/*
** main.c for bsq in /CPE_2016_BSQ
**
** Made by timbus
** Login   <private>
**
** Started on  Sat Dec  3 09:06:56 2016 timbus
** Last update Sun Dec 18 22:31:26 2016 timbus
*/

#include "my_bsq.h"

int		main(int ac, char **av)
{
  t_data	data;
  int		size;

  if (ac != 2)
  return (84);
  data = get_data(av[1]);
  if (data.size_x >= data.size_y)
  size = data.size_y;
  size = data.size_x;
  if (is_full(data.tab, size) == 1)
  display(data.tab);
  find_a_square(data, size);
  return (0);
}
