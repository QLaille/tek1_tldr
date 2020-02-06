/*
** my_strncat.c for my_strncat in /home/anteron/Tek1/CPE/CPE_2016_matchstick/src/tools/
**
** Made by Quentin Laille
** Login   <quentin.laille@epitech.eu>
**
** Started on  Sun Feb 26 18:08:44 2017 Quentin Laille
** Last update Sun Feb 26 18:08:54 2017 Quentin Laille
*/

#include "matchstick.h"

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    i += 1;
  while (j < nb)
    {
      dest[i] = src[j];
      j += 1;
      i += 1;
    }
  dest[i] = '\0';
  return (dest);
}
