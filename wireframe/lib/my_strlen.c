/*
** my_strlen.c for my_strlen.c in /home/QuentinLaille/CPool/CPool_Day04
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Thu Oct  6 13:22:05 2016 Quentin Laille
** Last update Thu Dec  8 10:07:40 2016 Quentin Laille
*/

#include "my_wireframe.h"

int	my_strlen(char *str)
{
  int	count;

  count = 0;
  while (str[count] != '\0')
    count += 1;
  return (count);
}
