CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address
INCLUDE = -I./includes
VPATH = srcs
RM = del /f /q /a

GENERAL = Bureaucrat

NAME = Bureaucrat
SRCS = $(addsuffix .cpp, $(GENERAL))\
	   main.cpp		

OBJ_DIR = obj
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR):
	mkdir -p obj

$(OBJ_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME).exe

re: fclean all

run: all clean
	echo ""
	./ex01

.PHONY: all clean fclean re run

#.SILENT:
