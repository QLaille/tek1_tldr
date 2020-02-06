/*
** my_calloc.c for my_calloc in /wireframe/tools
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Wed Dec  7 14:13:43 2016 Quentin Laille
** Last update Wed Dec  7 14:26:23 2016 Quentin Laille
*/

#include "my_wireframe.h"

char	*my_calloc(int	i)
{
  char	*ret;
  int	x;

  x = 0;
  ret = malloc(sizeof(char) * (i + 1));
  while (x < (i + 1))
      {
	ret[x] = '\0';
	x += 1;
      }
  return (ret);
}
