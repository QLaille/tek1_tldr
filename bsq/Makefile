##
## Makefile for BSQ in /CPE_2016_BSQ
##
## Made by timbus
## Login   <private>
##
## Started on  Sat Dec  3 08:00:01 2016 timbus
## Last update Thu Dec 15 11:21:37 2016 timbus
##

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-I./include/ -g	\
		-L./lib/ -lprintf
##		-Wall -Wextra -Werror

PARSE	=	functions/parsing/

SIMPLE	=	functions/scan/simple_method/

HORZ  = functions/scan/horizontal_method/

DISP	=	functions/display/

TOOLS	=	tools/

SRCS	=	main.c				\
		$(SIMPLE)fill_square.c		\
		$(SIMPLE)find_square.c		\
		$(SIMPLE)is_square.c		\
		$(SIMPLE)this_big.c		\
		$(HORZ)hor_method.c  		\
		$(HORZ)numerize.c   		\
		$(HORZ)computing.c   		\
		$(PARSE)get_data.c		\
		$(PARSE)get_file.c		\
		$(PARSE)get_size.c		\
		$(DISP)display.c		\
		$(TOOLS)my_strlen.c		\
		$(TOOLS)my_str_to_wordtab.c	\
		$(TOOLS)my_getnbr.c		\
		$(TOOLS)my_cacalloc.c		\
		$(TOOLS)my_calloc.c		\
		$(TOOLS)my_ialloc.c		\
		functions/is_full.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
