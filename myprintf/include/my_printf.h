/*
** my.h for my_printf in /B1-USP/PSU_2016_my_printf/include
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Wed Nov  9 14:11:53 2016 Quentin Laille
** Last update Sun Nov 20 12:22:28 2016 Quentin Laille
*/

#ifndef _MY_H_
# define _MY_H_

#include <unistd.h>
#include <stdarg.h>

typedef struct	s_flag
{
  char		c;
  void		(*disp_fnc)(va_list params);
}		t_flag;

void	disp_address(va_list);
void	disp_percent(va_list);
void	disp_int(va_list);
void	disp_str(va_list);
void	disp_octal(va_list);
void	disp_dec_uns(va_list);
void	disp_hex_uns(va_list);
void	disp_hex_uns_cap(va_list);
void	disp_char(va_list);
void	disp_binary(va_list);
void	disp_ascii(va_list);
void	disp_double(va_list);
void	disp_none(va_list);
void	my_putchar(char);
void	my_putstr(char *);
void	my_putnbr(int);
void	my_putnbr_base(int, char*);
void	my_putnbr_base_ll(long long, char*);
void	my_printf(char *, ... );
int	number_arg(char *);
int	my_strlen(char *);

#endif /* !_MY_H_ */
