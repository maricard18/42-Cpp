# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maricard <maricard@student.porto.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/21 12:17:49 by maricard          #+#    #+#              #
#    Updated: 2023/07/11 14:42:21 by maricard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RES	= \033[0m
BLA	= \033[1;30m
RED	= \033[1;31m
GRE	= \033[1;32m
YEL	= \033[1;33m
BLU	= \033[1;34m
PUR	= \033[1;35m
CYA	= \033[1;36m
WHI	= \033[1;37m

CC 		= c++
RM 		= rm -f
AR 		= ar -rcs
NAME	= brain
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRC		= main.cpp
TARGET 	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(TARGET)
		@echo "$(WHI)[$(CYA)Linking$(WHI)] $(GRE)all$(RES)"
		@$(CC) $(CFLAGS) $(TARGET) -o $(NAME)

		@echo "$(WHI)[$(GRE)Done$(WHI)]$(RES)"
	
%.o : %.cpp 
		@echo "$(WHI)[$(CYA)Compiling$(WHI)] $(CFLAGS) $(GRE)$<$(RES)"
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
		@echo "$(WHI)[$(RED)Cleaned$(WHI)]$(RES)"
		@$(RM) $(TARGET) $(TARGET_BONUS)

fclean: clean
		@echo "$(WHI)[$(RED)Cleaned even better$(WHI)]$(RES)"
		@$(RM) $(NAME)

re: fclean all

run: re
		@clear
		@echo "$(WHI)[$(GRE)running$(WHI)]$(RES)"
		@./$(NAME)
		