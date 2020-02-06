/*
** number_arg.c for my_printf in /B1-USP/PSU_2016_my_printf
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Wed Nov  9 15:06:20 2016 Quentin Laille
** Last update Wed Nov  9 15:07:03 2016 Quentin Laille
*/

int     number_arg(char *str)
{
  int   cursor;
  int   nb;

  nb = 0;
  cursor = 0;
  while (str[cursor] != '\0')
    {
      if (str[cursor] == '%')
	nb += 1;
      cursor += 1;
    }
  return (nb);
}
