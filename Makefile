# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eomelcha <eomelcha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/01 18:17:13 by eomelcha          #+#    #+#              #
#    Updated: 2019/06/21 18:11:56 by eomelcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl

OBJS = get_next_line.o\
		main.o

	
CFLAGS = -Wall -Wextra -Werror 
#-fsanitize+address

all : $(NAME)

$(NAME) : $(OBJS) add_lib
		gcc $(CFLAGS) libft/libft.a $(OBJS) -o $(NAME)

$(OBJS) : get_next_line.h 

add_lib :
	@make -C libft

clean :
	rm -f $(OBJS)
	@make -C libft/ clean
                
fclean : clean
	rm -f $(NAME)
	@make -C libft/ fclean

re : fclean all