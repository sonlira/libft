# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: abaldelo <abaldelo@student.42madrid.com>   #+#  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2024-09-28 07:55:52 by abaldelo          #+#    #+#             #
#   Updated: 2024-09-28 07:55:52 by abaldelo         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #
NAME	= libft.a
RM		= rm -f
CC		= cc
CCFLAGS = -Wall -Werror -Wextra
LIB		= ar rcs
SRC		= $(wildcard *.c)
OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: clean fclean all

.PHONY: all fclean clean re