NAME = phonebook

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS =	srcs/contact.cpp\
		srcs/phonebook.cpp\
		srcs/main.cpp
OBJS = ${SRCS:.cpp=.o}

${NAME}: ${OBJS}
	${CXX} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

all : ${NAME}

re: fclean all

.PHONY: ${NAME} fclean clean all re

.SILENT: