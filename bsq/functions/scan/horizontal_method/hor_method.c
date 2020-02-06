/*
** hor_method.c for bsq in /CPE_2016_BSQ/functions/scan/horizontal_method
**
** Made by timbus
** Login   <private>
**
** Started on  Wed Dec  7 11:22:09 2016 timbus
** Last update Fri Dec 16 17:20:59 2016 timbus
*/

#include "my_bsq.h"

void		hor_method(t_data data)
{
  char**	ret;

  ret = numerize(data);
  ret = computing(data, ret);
  display(ret);
}
