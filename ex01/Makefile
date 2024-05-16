NAME = carnet

FLAGS = -Wall -Wextra -Werror

CC = g++

SRCS = main.cpp \
	phoneBook.cpp \
	phoneBook.hpp \
	contact.cpp \
	contact.hpp

OBJECT = $(SRCS:.cpp=.o)

$(NAME):
	$(CC) $(FLAGS) -c $(SRCS) 
	$(CC) $(FLAGS) -o $(NAME) $(OBJECT)

all: $(NAME)	

clean:
	del $(OBJECT)

fclean: clean
	del $(NAME).exe

re: fclean all

.PHONY: all clean fclean  re
