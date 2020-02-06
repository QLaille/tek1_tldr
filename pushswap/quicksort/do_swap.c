/*
** do_swap.c for pushswap in /CPE_2016_Pushswap/operations/array
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Tue Nov 22 10:02:34 2016 Quentin Laille
** Last update Thu Nov 24 14:37:34 2016 Quentin Laille
*/

#include "my.h"
#include <stdio.h>

t_array	*do_swap(t_array *data, int a, int b)
{
  int	mem;

  if (a == b)
    return (data);
  mem = data->array[a];
  data->array[a] = data->array[b];
  data->array[b] = mem;
  display(data, a, b);
  return (data);
}
