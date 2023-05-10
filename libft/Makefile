NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

AR = ar -rcs

SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c main.c

OBJ = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJ} main.o libft.a
		${AR} ${NAME} ${OBJ} main.o

clean:
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re: fclean all	