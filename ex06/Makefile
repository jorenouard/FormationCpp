CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
INCLUDE = -I./includes
VPATH = srcs
RM = del 

GENERAL = ClapTrap ScavTrap

NAME = ClapTrap
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

.PHONY: all clean fclean re 

#.SILENT: