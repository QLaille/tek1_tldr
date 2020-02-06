/*
** my_strcpy.c for my_strcpy.c in /home/QuentinLaille/CPool/CPool_Day06
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Mon Oct 10 08:49:54 2016 Quentin Laille
** Last update Mon Feb 20 16:09:20 2017 Quentin Laille
*/

#include "matchstick.h"

char	*my_strcpy(char *dest, char *src)
{
  int	a;
  int	b;

  a = 0;
  while (dest[a] != '\0')
  a += 1;
  dest = my_realloc(dest, a + my_strlen(src));
  while (src[b] != '\0')
    {
      dest[a] = src[b];
      a += 1;
      b += 1;
    }
  return (dest);
}
