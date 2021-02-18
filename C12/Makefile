SRCS	= main.c \
		  ./ex00/ft_create_elem.c \
		  ./ex01/ft_list_push_front.c \
		  ./ex02/ft_list_size.c \
		  ./ex03/ft_list_last.c \
		  ./ex04/ft_list_push_back.c \
		  ./ex06/ft_list_clear.c \

OBJS	= ${SRCS:.c=.o}

HDR		=	ft_list.h

all:	${OBJS}
		gcc -Wall -Wextra -Werror -I ${HDR} -o a.out ${OBJS}

clean:  
		rm -f ${OBJS} a.out

re : 	clean all

.PHONY: clean all re 
