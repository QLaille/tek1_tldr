##
## Makefile for wireframe in /home/QuentinLaille/Semester_1/B1-MUL/wireframe
## 
## Made by Quentin Laille
## Login   <QuentinLaille@epitech.net>
## 
## Started on  Thu Nov 24 15:08:12 2016 Quentin Laille
## Last update Fri Dec  9 12:17:14 2016 Laillé Quentin
##

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-Wall -Werror -Wextra -I./include/	\
		-lc_graph_prog -lm
#		-lcsfml-graphics -lcsfml-window -lm


##
## FOLDERS
##

ASKED	=	src/

LIB	=	lib/

TOOLS	=	tools/

TEST	=	test/

2D	=	wirelib/2d_functions/

3D	=	wirelib/3d_functions/

INIT	=	wirelib/create/

PAR	=	wirelib/projections/parallel/

##
## C FILES
##

SRCS	=	main.c					\
		$(ASKED)my_put_pixel.c			\
		$(ASKED)my_draw_line.c			\
		$(ASKED)my_parallel_projection.c	\
		$(ASKED)my_isometric_projection.c	\
		$(TOOLS)get_data.c			\
		$(TOOLS)get_size.c			\
		$(TOOLS)count_nb.c			\
		$(TOOLS)parse_this.c			\
		$(INIT)create_framebuffer.c		\
		$(INIT)create_pixelbuffer.c		\
		$(INIT)create_window.c			\
		$(INIT)create_rect.c			\
		$(2D)my_draw_rectangle.c		\
		$(3D)my_draw_box.c			\
		$(3D)my_draw_grid.c			\
		$(PAR)plantopar_3d.c			\
		$(LIB)my_calloc.c			\
		$(LIB)my_ialloc.c			\
		$(LIB)my_get_nbr.c			\
		$(LIB)my_str_isnum.c			\
		$(LIB)my_str_to_wordtab.c		\
		$(LIB)my_strlen.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	wireframe

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
