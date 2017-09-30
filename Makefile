# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgaia <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/19 21:33:28 by rgaia             #+#    #+#              #
#    Updated: 2017/09/20 16:27:56 by rgaia            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Must compile source files to a static library libft.a
# must at least contain rules $(NAME)
# must compile with -Wall -Wextra -Werror

NAME = libft.a

SRC = *.c

OBJ = *.o

FLAGS = -Wall -Wextra -Werror -c 

all:
	@gcc $(FLAGS) $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME) 

re: fclean all


