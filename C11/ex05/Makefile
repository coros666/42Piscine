SRCS	=	main.c ft.c

OBJS	= 	${SRCS:.c=.o}

CC		=	gcc -Wall -Wextra -Werror

all:	${OBJS}
		${CC} ${OBJS} -o do-op

clean:	
		rm -f ${OBJS}

fclean:	clean
		rm -f do-op

re:		fclean all

.PHONY: all clean fclean
		
