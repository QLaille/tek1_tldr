/*
** my.h for pushswap in /CPE_2016_Pushswap/include
** 
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
** 
** Started on  Mon Nov 14 13:32:03 2016 Quentin Laille
** Last update Fri Nov 25 14:36:20 2016 Quentin Laille
*/

#ifndef _MY_H_
# define _MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my_printf.h"

#define	ABS(x)	(x > 0 ? x : -(x))

typedef struct	s_array
{
  int		*array;
  int		size;
  int		first;
  int		cursor;
}		t_array;

void	quicksort(t_array *, int, int);
void	display(t_array *, int, int);
void	calibrate(t_array *, int);
t_array	*do_swap(t_array *, int, int);
int	my_getnbr(char *);
void	output_is(t_array *, char *);

#endif /* !_MY_H_ */
