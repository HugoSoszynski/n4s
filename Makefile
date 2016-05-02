##
## Makefile for n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s
## 
## Made by Hugo SOSZYNSKI
## Login   <hugo.soszynski@epitech.eu>
## 
## Started on  Mon Apr 25 10:54:00 2016 Hugo SOSZYNSKI
## Last update Mon May  2 10:21:16 2016 Hugo SOSZYNSKI
##

CC		=	gcc

RM		=	rm -f

CFLAGS		+=	-W -Wextra -Wall
CFLAGS		+=	-Werror
CFLAGS		+=	-Iincludes
CFLAGS		+=	-ggdb3

NAME		=	ia

SRCS		=	sources/main.c \
			sources/get_next_line.c \
			sources/mainloop.c \
			sources/my_bzero.c \
			sources/my_getfloat.c \
			sources/my_getbnr.c \
			sources/error.c \
			sources/my_strlen.c

OBJS		=	$(SRCS:.c=.o)


all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) -Iincludes

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
