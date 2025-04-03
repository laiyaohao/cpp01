NAME := zombiehorde
CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98
SRC := main.cpp Zombie.cpp zombieHorde.cpp
OBJ := ${SRC:.cpp=.o}

all : ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

.PHONY: all re clean fclean