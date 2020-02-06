/*
** bsq.h for bsq in /CPE_2016_BSQ/include
**
** Made by timbus
** Login   <private>
**
** Started on  Sat Dec  3 08:00:58 2016 timbus
** Last update Sat Dec 17 09:38:22 2016 timbus
*/

#ifndef _MY_BSQ_H_
# define _MY_BSQ_H_

#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include "my_printf.h"

typedef struct	s_data
{
  char          **tab;
  int		        size_x;
  int		        size_y;
}		            t_data;

typedef struct s_big_square
{
  int *top_l;
  int *bot_r;
  int size;
}              t_big_square;

/*
** PARSING
*/

t_data	get_data(char *);
int	    get_length(char *);
char	  *get_file(char *, int);
int	    line_length(char *);
int	    col_length(char *);
int     get_first_line_length(char *);

/*
** DISPLAY
*/

void	display(char **);

/*
** SCAN HORIZONTAL METHOD
*/

void hor_method(t_data);
char **numerize(t_data);
char **computing(t_data, char **);

/*
** SCAN SIMPLE METHOD
*/

void	find_a_square(t_data, int);
int	  is_square(char **tab, int, int, int);
char	**this_big(char **, int, int, int);
char	**fill_square(char **, int, int, int);
int   is_full(char **, int);

/*
** TOOLS
*/

int	  my_strlen(char *);
char	**my_str_to_wordtab(char *);
char	*my_calloc(int);
int   *my_ialloc(int);
int	  my_getnbr(char *, int);

#endif /* !_MY_BSQ_H_ */
