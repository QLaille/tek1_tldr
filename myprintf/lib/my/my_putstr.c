/*
** my_putstr.c for my_putstr.c in /home/QuentinLaille/CPool/CPool_Day04
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Thu Oct  6 11:59:07 2016 Quentin Laille
** Last update Wed Nov 23 16:57:53 2016 Quentin Laille
*/

#include "my_printf.h"

void	my_putstr(char *str)
{
  int	letter;

  letter = 0;
  while (str[letter] != '\0')
    {
      my_putchar(str[letter]);
      letter += 1;
    }
}
