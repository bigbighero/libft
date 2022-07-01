# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roferrei <roferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 23:08:11 by roferrei          #+#    #+#              #
#    Updated: 2022/07/02 00:21:42 by roferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
				ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
				ft_memcpy.c ft_memset.c ft_strlcat.c ft_strlcpy.c \
				ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_memmove.c \
				

CC	=	gcc

RM	=	rm -f

OBJS	= ${SRCS:.c=.o}

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus
