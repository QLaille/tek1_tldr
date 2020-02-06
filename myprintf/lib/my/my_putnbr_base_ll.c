/*
** my_putnbr_base_ll.c for my_printf in /PSU_2016_my_printf/lib/my
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Thu Nov 17 13:14:10 2016 Quentin Laille
** Last update Wed Nov 23 16:57:36 2016 Quentin Laille
*/

#include "my_printf.h"

void	my_putnbr_base_ll(long long nbr, char *base)
{
  int	hold;
  int	len;

  if (nbr < 0)
    {
      my_putchar('-');
      nbr *= (-1);
    }
  len = my_strlen(base);
  hold = nbr % len;
  nbr = nbr / len;
  if (nbr > 0)
    my_putnbr_base_ll(nbr, base);
  my_putchar(base[hold]);
}
