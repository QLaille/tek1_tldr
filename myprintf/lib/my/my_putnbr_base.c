/*
** my_putnbr_base.c for my_putnbr_base in /PSU_2016_my_printf/tools
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Fri Nov 11 12:55:20 2016 Quentin Laille
** Last update Wed Nov 23 16:57:28 2016 Quentin Laille
*/

#include "my_printf.h"

void	my_putnbr_base(int nbr, char *base)
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
    my_putnbr_base(nbr, base);
  my_putchar(base[hold]);
}
