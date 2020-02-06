##
## Makefile for matchstick in /home/anteron/Tek1/CPE/CPE_2016_matchstick/
##
## Made by Quentin Laille
## Login   <quentin.laille@epitech.eu>
##
## Started on  Mon Feb 13 09:07:57 2017 Quentin Laille
## Last update Sun Feb 26 19:43:57 2017 Quentin Laille
##

CC	=	gcc

RM	=	rm -f

NAME	=	matchstick

CFLAGS	=	-I./include/ -L./lib/ -lprintf -g \
-Wall -Wextra -Werror

##
## FOLDERS
##

SRC	=	./src/

CPU	=	$(SRC)cpu/

DISP	=	$(SRC)display/

GNL	=	$(SRC)get_next_line/

MAIN	=	$(SRC)main/

OPER	=	$(SRC)operate/

PARS	=	$(SRC)parsing/

PLAYER	=	$(SRC)player/

TOOLS	=	$(SRC)tools/


##
## LISTING
##

SRCS	=	$(MAIN)end_game.c	\
	$(MAIN)main.c			\
	$(MAIN)matchstick.c		\
	$(MAIN)game_time.c		\
	$(CPU)cpu_clean.c		\
	$(CPU)cpu_find_line.c		\
	$(CPU)cpu_finish.c \
	$(CPU)cpu_normalize.c		\
	$(CPU)cpu_pick_line.c \
	$(CPU)cpu_pick_match.c \
	$(CPU)cpu_sumline.c \
	$(CPU)cpu_turn.c		\
	$(DISP)display.c		\
	$(DISP)star_line.c		\
	$(DISP)story_line.c		\
	$(GNL)get_next_line.c			\
	$(OPER)is_empty.c		\
	$(OPER)pick.c			\
	$(PARS)parsing_time.c		\
	$(PLAYER)check_player_line.c	\
	$(PLAYER)check_player_number.c	\
	$(PLAYER)get_line.c \
	$(PLAYER)get_number.c \
	$(PLAYER)player_turn.c		\
	$(TOOLS)isnbr.c \
	$(TOOLS)isneg.c			\
	$(TOOLS)my_calloc.c		\
	$(TOOLS)my_error.c \
	$(TOOLS)my_getnbr.c		\
	$(TOOLS)my_strlen.c		\
	$(TOOLS)my_strncat.c

OBJS 	=	$(SRCS:.c=.o)

##
## COMMANDS
##

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
