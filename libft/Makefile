# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/01 18:17:13 by eomelcha          #+#    #+#              #
#    Updated: 2019/06/18 14:23:31 by eomelcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SONAME = libft.so

OBJS = ft_isdigit.o\
	   ft_memcmp.o\
	   ft_putendl.o\
	   ft_strchr.o\
	   ft_striter.o\
	   ft_strncat.o\
	   ft_strsplit.o\
	   ft_isprint.o\
	   ft_memcpy.o\
	   ft_putendl_fd.o\
	   ft_strclr.o\
	   ft_striteri.o\
	   ft_strncmp.o\
	   ft_strstr.o\
	   ft_atoi.o\
	   ft_itoa.o\
	   ft_memdel.o\
	   ft_putnbr.o\
	   ft_strcmp.o\
	   ft_strjoin.o\
	   ft_strncpy.o\
	   ft_strsub.o\
	   ft_bzero.o\
	   ft_lstnew.o\
	   ft_memmove.o\
	   ft_putnbr_fd.o\
	   ft_strcpy.o\
	   ft_strlcat.o\
	   ft_strnequ.o\
	   ft_strtrim.o\
	   ft_isalnum.o\
	   ft_memalloc.o\
	   ft_memset.o\
	   ft_putstr.o\
	   ft_strdel.o\
	   ft_strlen.o\
	   ft_strnew.o\
	   ft_tolower.o\
	   ft_isalpha.o\
	   ft_memccpy.o\
	   ft_putchar.o\
	   ft_putstr_fd.o\
	   ft_strdup.o\
	   ft_strmap.o\
	   ft_strnstr.o\
	   ft_toupper.o\
	   ft_isascii.o\
	   ft_memchr.o\
	   ft_putchar_fd.o\
	   ft_strcat.o\
	   ft_strequ.o\
	   ft_strmapi.o\
	   ft_strrchr.o\
		ft_lstdelone.o\
		ft_lstdel.o\
		ft_lstadd.o\
		ft_lstiter.o\
		ft_lstmap.o\
		ft_skipchar1.o\
		ft_skipchar2.o\
		ft_skipchar.o\
		ft_numberofstr.o\
		ft_multistr.o\
		ft_iswhitechar.o\
		ft_skipstr.o
	
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

$(OBJS) : libft.h 

clean :
	rm -f $(OBJS)
                
fclean : clean
	rm -f $(NAME)

re : fclean all
