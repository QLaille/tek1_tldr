/*
** my_putnbr.c for my_putnbr in /PSU_2016_my_printf_bootstrap/tools
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Thu Nov 10 16:39:59 2016 Quentin Laille
** Last update Wed Nov 23 16:57:44 2016 Quentin Laille
*/

#include "my_printf.h"

void	my_putnbr(int nb)
{
  int	mux;

  if (nb < 0)
    {
      my_putchar('-');
      nb *= -1;
    }
  mux = 1;
  while (mux <= nb)
    mux *= 10;
  mux /= 10;
  while (mux != 0)
    {
	my_putchar((nb / mux) + 48);
	nb -= (nb / mux) * mux;
	mux /= 10;
    }
}
