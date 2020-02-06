/*
** disp_2.c for my_printf in /B1-USP/PSU_2016_my_printf/flag_functions
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Wed Nov  9 14:41:13 2016 Quentin Laille
** Last update Wed Nov 23 16:56:02 2016 Quentin Laille
*/

#include "my_printf.h"

void	disp_dec_uns(va_list specifiers)
{
  unsigned int	x;

  x = (unsigned int)va_arg(specifiers, int);
  my_putnbr(x);
}

void	disp_hex_uns(va_list specifiers)
{
  int	nb;
  char	*base;

  base = "0123456789abcdef";
  nb = va_arg(specifiers, unsigned int);
  my_putnbr_base(nb, base);
}

void	disp_hex_uns_cap(va_list specifiers)
{
  int	nb;
  char	*base;

  base = "0123456789ABCDEF";
  nb = va_arg(specifiers, unsigned int);
  my_putnbr_base(nb, base);
}
