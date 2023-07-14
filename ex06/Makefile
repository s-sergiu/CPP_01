NAME = harlFilter
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp \
	  Harl.cpp

OBJ = main.o \
      Harl.o

all:$(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re: clean all

.PHONY:all clean fclean re
