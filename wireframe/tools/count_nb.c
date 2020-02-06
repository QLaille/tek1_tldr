/*
** count_nb.c for wireframe in /wireframe/test
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Tue Dec  6 11:40:58 2016 Quentin Laille
** Last update Tue Dec  6 15:46:10 2016 Quentin Laille
*/

#include "my_wireframe.h"

int	count_nb(char *str)
{
  int	mem;
  int	cur;
  int	ret;

  ret = 0;
  cur = 0;
  mem = 0;
  while (str[cur] != '\n' && str[cur] != '\0')
    {
      if (is_num(str[cur]) == 1)
	{
	  if (mem == 0)
	    {
	      ret += 1;
	      mem = 1;
	    }
	}
      else if (str[cur] == ',')
	mem = 0;
      cur += 1;
    }
  return (ret);
}
