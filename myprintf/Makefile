##
## Makefile for my_printf in B1-USP/PSU_2016_my_printf
## 
## Made by Quentin Laille
## Login   <QuentinLaille@epitech.net>
## 
## Started on  Mon Nov  7 12:31:02 2016 Quentin Laille
## Last update Wed Nov 23 16:58:41 2016 Quentin Laille
##

CC	=	gcc

RM	=	rm -f

AR	=	ar rc

CFLAGS	=	-Werror -Wall -Wextra -I./include/

LIB	=	./lib/my

FNC	=	./tools/flag_functions

SRCS	=	my_printf.c			\
		$(LIB)/my_putchar.c		\
		$(LIB)/my_putnbr.c		\
		$(LIB)/my_putstr.c		\
		$(LIB)/my_strlen.c		\
		$(LIB)/my_putnbr_base.c		\
		$(LIB)/my_putnbr_base_ll.c	\
		$(LIB)/number_arg.c		\
		$(FNC)/disp_1.c			\
		$(FNC)/disp_2.c			\
		$(FNC)/disp_numbers.c		\
		$(FNC)/disp_3.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	libprintf.a

all:	$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
