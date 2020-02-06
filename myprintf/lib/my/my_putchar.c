/*
** my_putchar.c for my_putchar.c in /home/QuentinLaille/CPool/CPool_Day07/lib/my
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Tue Oct 11 19:36:02 2016 Quentin Laille
** Last update Mon Oct 17 11:09:50 2016 Quentin Laille
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
