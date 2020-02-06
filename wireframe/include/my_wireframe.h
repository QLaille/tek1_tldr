/*
** my_wireframe.h for wireframe in /wireframe/include
**
** Made by Quentin Laille
** Login   <QuentinLaille@epitech.net>
**
** Started on  Fri Nov 18 16:39:30 2016 Quentin Laille
** Last update Sat Dec 10 00:11:57 2016 Laille
*/

#ifndef _MY_WIREFRAME_H_
# define _MY_WIREFRAME_H_

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Window/Event.h>
#include <fcntl.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#define SCREEN_WIDTH	1024
#define SCREEN_HEIGHT	720
#include <SFML/Graphics/Sprite.h>
#define ABS(x)	(x > 0 ? x : -(x))

typedef struct	s_input
{
  int		**array;
  int		size_x;
  int		size_y;
}		t_input;

typedef struct	s_my_framebuffer
{
  sfUint8*	pixels;
  int		width;
  int		height;
}		t_my_framebuffer;

typedef struct	s_my_grid
{
  sfVector3f	from;
  sfVector3f	size;
}		t_my_grid;

typedef struct	s_2d_rect
{
  sfVector2i	topL;
  sfVector2i	botL;
  sfVector2i	botR;
  sfVector2i	topR;
}		t_2d_rect;

typedef struct		s_3d_box
{
  struct s_2d_rect	front;
  struct s_2d_rect	back;
}			t_3d_box;

typedef struct		s_sfmldata
{
  sfRenderWindow	*window;
  sfSprite		*sprite;
  sfTexture		*texture;
  t_my_framebuffer	*framebuffer;
  sfEvent		input;
  int			mode;
}			t_sfmldata;

/*
** INIT
*/

sfRenderWindow*		create_window(char *, int, int);
sfUint8*		my_pixelbuffer_create(int, int);
sfVector2i		my_parallel_projection(sfVector3f, float);
sfVector2i		my_isometric_projection(sfVector3f);
t_my_framebuffer*	my_framebuffer_create(int, int);

/*
** 2D & 3D FUNCTIONS
*/

void			my_draw_line(t_my_framebuffer*, sfVector2i,
				     sfVector2i, sfColor);
void			my_draw_grid(t_sfmldata, int **,
				     sfVector2i, sfColor);
void			par_draw_rect(t_my_framebuffer*, t_2d_rect, sfColor);
void			iso_draw_rect(t_my_framebuffer*, t_2d_rect, sfColor);
void			my_draw_rect(t_my_framebuffer*, t_2d_rect, sfColor);
void			draw_parallel_box(t_sfmldata, int **, sfVector2i, sfColor);
void			draw_isometric_box(t_sfmldata, int **, sfVector2i, sfColor);
void			par_draw_box(t_my_framebuffer*, t_3d_box, sfColor);
void			iso_draw_box(t_my_framebuffer*, t_3d_box, sfColor);
void			my_put_pixel(t_my_framebuffer*, int, int, sfColor);
t_3d_box		plantopar_3d(sfVector3f, sfVector3f, float);
t_2d_rect		par_top(int **, int, int, sfVector3f);
t_2d_rect		par_base(sfVector3f);
t_2d_rect		iso_top(int **, int, int, sfVector3f);
t_2d_rect		iso_base(sfVector3f);

/*
** PARSING
*/

t_input			parse_this(char *);
int			get_col_size(char *, int);
int			get_line_size(char *);
int			line_length(char *);
int			col_length(char *);
int			**get_tab(char *);
int			count_nb(char *);

/*
** TOOLS
*/

char			**my_str_to_wordtab(char *);
int			my_get_nbr(char *);
int			my_strlen(char *);
int			is_num(char);
int			*my_ialloc(int);
char			*my_calloc(int);

/*
** INIT
*/

int	**get_tab_arr(char *, int, int);
char	*new_file(int);
int	get_length(char *);
char	*get_file(char *, int);

#endif /* !_MY_WIREFRAME_H_ */
