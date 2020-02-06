##
## Makefile for wolf3d in /home/anteron/Tek1/MUL/wolf3d/
##
## Made by Quentin Laille
## Login   <quentin.laille@epitech.eu@epitech.eu>
##
## Started on  Mon Dec 19 08:48:15 2016 Quentin Laille
## Last update Wed Jan 11 09:44:35 2017 Quentin Laille
##

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-I./include/ -O2		\
		-lc_graph_prog -lm  	\
		-Wall -Werror -Wextra

##
## FOLDERS
##

ASKED	=	./src/

DISPLAY	=	./display/

OPERATE	=	./operate/

PARSING	=	./parsing/

TOOLS	=	./tools/

##
## FILES
##

SRCS	=	wolf3d.c			\
		init.c				\
		$(ASKED)move_forward.c		\
		$(ASKED)my_draw_line.c		\
		$(ASKED)my_put_pixel.c		\
		$(ASKED)raycast.c		\
		$(DISPLAY)display.c		\
		$(DISPLAY)render_game.c		\
		$(DISPLAY)refresh.c		\
		$(DISPLAY)draw_ray.c		\
		$(OPERATE)operate.c		\
		$(OPERATE)move_backward.c	\
		$(OPERATE)move_strafe_left.c	\
		$(OPERATE)move_strafe_right.c	\
		$(OPERATE)cam_rotate_left.c	\
		$(OPERATE)cam_rotate_right.c	\
		$(PARSING)parse_this.c		\
		$(PARSING)get_tab_arr.c		\
		$(PARSING)get_size.c		\
		$(PARSING)get_in_arr.c		\
		$(PARSING)get_file.c		\
		$(PARSING)extract_line.c	\
		$(PARSING)count_nb.c		\
		$(TOOLS)my_str_to_wordtab.c	\
		$(TOOLS)my_cacalloc.c		\
		$(TOOLS)my_calloc.c		\
		$(TOOLS)my_ialloc.c		\
		$(TOOLS)my_get_nbr.c		\
		$(TOOLS)my_strlen.c		\
		$(TOOLS)my_iaialloc.c		\
		$(TOOLS)my_str_isnum.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	wolf3d

all: $(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
