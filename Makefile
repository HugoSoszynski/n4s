##
## Makefile for n4s in /home/soszyn_h/rendu/CPE/CPE_2015_n4s
## 
## Made by Hugo SOSZYNSKI
## Login   <hugo.soszynski@epitech.eu>
## 
## Started on  Mon Apr 25 10:54:00 2016 Hugo SOSZYNSKI
## Last update Thu May 26 15:26:52 2016 Hugo SOSZYNSKI
##

CC		=	gcc

RM		=	rm -f

CFLAGS		+=	-W -Wextra -Wall
CFLAGS		+=	-Werror
CFLAGS		+=	-Iincludes
CFLAGS		+=	-ggdb3

NAME		=	ia

INSTRUCTIONS	=	sources/instructions/start_simulation.c \
			sources/instructions/stop_simulation.c \
			sources/instructions/car_forward.c \
			sources/instructions/wheels_dir.c \
			sources/instructions/my_putfloat.c \
#			sources/instructions/get_current_speed.c \
			sources/instructions/get_current_wheels.c \
			sources/instructions/get_info_lidar.c

RESPONSE	=	sources/responsive/my_getfloat.c \
			sources/responsive/my_getnbr.c \
			sources/responsive/my_strlen.c \
			sources/responsive/my_str_to_wordtab.c \
			sources/responsive/parse_answer.c

SRCS		=	sources/main.c \
			sources/get_next_line.c \
			sources/mainloop.c \
			sources/my_bzero.c \
			sources/error.c \
			$(INSTRUCTIONS) \
			$(RESPONSE)

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
