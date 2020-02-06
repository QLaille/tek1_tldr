/*
** my_get_nbr.c for my_get_nbr.c in /CPE_2016_BSQ/tools
**
** Made by timbus
** Login   <private>
**
** Started on  Thu Dec  8 14:14:00 2016 timbus
** Last update Thu Dec  8 14:27:05 2016 timbus
*/

#include "my_bsq.h"

int	my_getnbr(char *str, int nbr)
{
  if (*str == '-')
    return (-my_getnbr(++str, nbr));
  if (*str == '+')
    return (my_getnbr(++str, nbr));
  if (*str == '\n')
    return (nbr);
  nbr = nbr * 10 + (*str - '0');
    return (my_getnbr(++str, nbr));
}
