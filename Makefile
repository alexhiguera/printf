# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: columbux <columbux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 18:18:17 by ahiguera          #+#    #+#              #
#    Updated: 2024/01/27 01:20:39 by columbux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CFLAGS	= -c -Wall -Wextra -Werror

SRC		=	./src/ft_printf.c			\
			./src/puts.c				\
			./src/write.c				\

OBJ		= $(SRC:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJ)
					@echo "\033[32m *** Compiling dependencies... ***"
					@ar -rcs $(NAME) $(OBJ)
					@echo "\033[36m ft_printf Compiled! o.o\n"

%.o: %.c
					@gcc $(CFLAGS) -c $< -o $@

clean:
					@rm -f $(OBJ)

fclean: clean
					@rm -f $(NAME)
					@echo "\n\033[35m Deleting EVERYTHING! (-_-)\n"

re: fclean all

.PHONY: all clean fclean re