CC = gcc
NAME = libft.a
SRCS = *.c
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${OBJS}
	ar rs ${NAME} ${OBJS}

.c.o : ${SRCS}
	${CC} ${CFLAGS} -c $^

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclaen all	
