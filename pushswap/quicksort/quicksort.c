/*
** quicksort.c for quicksort in /CPE_2016_Pushswap/counting_sort
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Tue Nov 15 15:52:26 2016 Quentin Laille
** Last update Wed Nov 23 17:07:43 2016 Quentin Laille
*/

#include "my.h"

int	split(t_array *data, int low, int high)
{
  int	pivot;
  int	x;
  int	y;

  pivot = data->array[high];
  x = low;
  y = low;
  while (y < high)
    {
      if (data->array[y] < pivot)
	{
	  do_swap(data, x, y);
	  x += 1;
	}
      y += 1;
    }
  do_swap(data, x, high);
  return (x);
}

void	quicksort(t_array *data, int low, int high)
{
  int	middle;

  if (low < high)
    {
      middle = split(data, low, high);
      quicksort(data, low, middle - 1);
      quicksort(data, middle + 1, high);
    }
}
