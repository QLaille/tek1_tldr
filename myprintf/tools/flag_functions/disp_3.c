/*
** disp_3.c for my_printf in /PSU_2016_my_printf/flag_functions
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Wed Nov  9 15:09:18 2016 Quentin Laille
** Last update Wed Nov 23 16:56:16 2016 Quentin Laille
*/

#include "my_printf.h"

void	disp_address(va_list specifiers)
{
  void	*address;
  char	*base;

  address =va_arg(specifiers, void *);
  base = "0123456789ABCDEF";
  if (address == 0)
    my_putstr("(nil)");
  else
    {
      my_putstr("0x");
      my_putnbr_base_ll((long long)address, base);
    }
}
