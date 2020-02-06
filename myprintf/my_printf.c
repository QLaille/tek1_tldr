/*
** my_printf in /B1-USP/PSU_2016_my_printf
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Mon Nov  7 16:58:44 2016 Quentin Laille
** Last update Wed Nov 23 16:55:32 2016 Quentin Laille
*/

#include "my_printf.h"

/*
**    {'e', &disp_scientific},
**    {'g', &disp_double},
*/

static t_flag	tab_func[14] =
  {
    {'%', &disp_percent},
    {'d', &disp_int},
    {'s', &disp_str},
    {'i', &disp_int},
    {'o', &disp_octal},
    {'u', &disp_dec_uns},
    {'x', &disp_hex_uns},
    {'X', &disp_hex_uns_cap},
    {'c', &disp_char},
    {'b', &disp_binary},
    {'S', &disp_ascii},
    {'p', &disp_address},
    {'\0', NULL}
  };

void		my_printf(char *str, ...)
{
  va_list	specifiers;
  int		cur;
  int		i;

  cur = 0;
  va_start(specifiers, str);
  while (str[cur] != '\0')
    {
      if (str[cur] == '%')
	{
	  i = 0;
	  while ((tab_func[i].c != str[cur + 1]) && (tab_func[i].c != '\0'))
	    i += 1;
	  if (tab_func[i].c != '\0' || str[cur + 1] == 'n')
	    {
	      if (str[cur + 1] != 'n')
		tab_func[i].disp_fnc(specifiers);
	      cur += 1;
	    }
	  else
	    my_putchar('%');
	}
      else
	my_putchar(str[cur]);
      cur += 1;
    }
}
