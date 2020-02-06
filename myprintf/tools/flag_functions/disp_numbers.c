/*
** disp_numbers.c for my_printf in /PSU_2016_my_printf/tools/flag_functions
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Wed Nov 16 14:33:36 2016 Quentin Laille
** Last update Wed Nov 23 16:56:22 2016 Quentin Laille
*/

#include "my_printf.h"

void	disp_int(va_list specifiers)
{
  int	nb;

  nb = va_arg(specifiers, int);
  my_putnbr(nb);
}

void	disp_binary(va_list specifiers)
{
  int	var;
  char	*base;

  base = "01";
  var = va_arg(specifiers, int);
  my_putnbr_base(var, base);
}

void	disp_octal(va_list specifiers)
{
  int	var;
  char	*base;

  base = "01234567";
  var = va_arg(specifiers, int);
  my_putnbr_base(var, base);
}

void	disp_double(va_list specifiers)
{
  double nb;

  nb = va_arg(specifiers, double);
  my_putnbr(nb);
}
