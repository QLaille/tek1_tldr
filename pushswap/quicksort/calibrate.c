/*
** calibrate.c for pushswap in /CPE_2016_Pushswap/quicksort
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Fri Nov 25 14:17:03 2016 Quentin Laille
** Last update Sun Nov 27 15:12:13 2016 Quentin Laille
*/

#include "my.h"

void	calib_sup(t_array *data, int here)
{
  if ((data->cursor - here) <= (data->size / 2))
    {
      while (data-> cursor != here)
	{
	  data->cursor += 1;
	  if (data->cursor == data->size)
	    data->cursor = 0;
	  output_is(data, "ra");
	}
    }
  else
    {
      while (data-> cursor != here)
	{
	  data->cursor -= 1;
	  output_is(data, "rra");
	}
    }
}

void	calib_inf(t_array *data, int here)
{
  if ((here - data->cursor) <= (data->size / 2))
    {
      while (data-> cursor != here)
	{
	  data->cursor += 1;
	  output_is(data, "ra");
	}
    }
  else
    {
      while (data-> cursor != here)
	{
	  data->cursor -= 1;
	  if (data->cursor == -1)
	    data->cursor = data->size - 1;
	  output_is(data, "rra");
	}
    }
}

void	calibrate(t_array *data, int here)
{
  if (here < data->cursor)
    calib_sup(data, here);
  else if (here > data->cursor)
    calib_inf(data, here);
}
