/*
** disp_1.c for my_printf in /B1-USP/PSU_2016_my_printf/flag_functions
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Wed Nov  9 14:23:33 2016 Quentin Laille
** Last update Wed Nov 23 16:55:54 2016 Quentin Laille
*/

#include "my_printf.h"

void	disp_char(va_list specifiers)
{
  char	c;

  c = (char)va_arg(specifiers, int);
  my_putchar(c);
}

void	disp_str(va_list specifiers)
{
  char	*str;

  str = va_arg(specifiers, char *);
  my_putstr(str);
}

void	disp_percent(va_list specifiers)
{
  char	c;

  c = (char)va_arg(specifiers, int);
  my_putchar(c);
}

void	disp_ascii(va_list specifiers)
{
  char	*str;
  int	x;
  char	*base;

  base = "01234567";
  str = va_arg(specifiers, char *);
  x = 0;
  while (str[x] != '\0')
    {
      if (str[x] < 32)
	{
	  my_putstr("\\0");
	  my_putnbr_base((int)str[x], base);
	}
      else if (str[x] > 122)
	{
	  my_putchar('\\');
	  my_putnbr_base((int)str[x], base);
	}
      else
	my_putchar(str[x]);
      x += 1;
    }
}
