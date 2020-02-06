/*
** display.c for pushswap in /CPE_2016_Pushswap/quicksort
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Wed Nov 23 15:38:02 2016 Quentin Laille
** Last update Fri Nov 25 19:57:03 2016 Quentin Laille
*/

#include "my.h"

void	output_is(t_array *data, char *str)
{
  if (data->first == 1)
    {
      data->first = 0;
      my_printf("%s",str);
    }
  else
    {
      my_printf(" ");
      my_printf("%s",str);
    }
}

void	display(t_array *data, int a, int b)
{
  calibrate(data, a);
  if (ABS(a - b) == 1)
    output_is(data, "sa");
  else
    {
      output_is(data, "pb");
      data->size -= 1;
      if (data->cursor == data->size)
	data->cursor = 0;
      b -= 1;
      if (b == data->size)
	b = 0;
      calibrate(data, b);
      output_is(data, "pb");
      output_is(data, "sb");
      output_is(data, "pa");
      calibrate(data, a);
      output_is(data, "pa");
      data->size += 1;
      calibrate(data, 0);
    }
}
