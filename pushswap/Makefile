##
## Makefile for push_swap in B1-CPE/CPE_2016_Pushswap
## 
## Made by Quentin Laille
## Login   <QuentinLaille@epitech.net>
## 
## Started on  Mon Nov  7 12:27:20 2016 Quentin Laille
## Last update Fri Nov 25 14:25:34 2016 Quentin Laille
##

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-Wall -Werror -Wextra -I./include/ -L./lib/my/ -lprintf

QS	=	quicksort/

SRCS	=	$(QS)main.c			\
		$(QS)quicksort.c		\
		$(QS)/do_swap.c			\
		$(QS)/display.c			\
		$(QS)/calibrate.c		\
		lib/my/my_getnbr.c		\
		lib/my/my_str_isnum.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	push_swap

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
