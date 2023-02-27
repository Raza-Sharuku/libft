# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sraza <sraza@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 16:42:18 by sraza             #+#    #+#              #
#    Updated: 2023/02/05 15:32:30 by sraza            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_bzero.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memchr.c\
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_atoi.c \
		ft_strmapi.c \
		ft_substr.c \
		ft_calloc.c \
		ft_strjoin.c \
		ft_split.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_striteri.c \
		ft_strtrim.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_itoa.c
SRCS_B = ft_lstlast.c \
			ft_lstsize.c \
			ft_lstadd_front.c \
			ft_lstnew.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \

OBJS = ${SRCS:.c=.o}

OBJS_B = ${SRCS_B:.c=.o}

ALL_OBJS = ${OBJS}

ifdef bonus_flag
	ALL_OBJS+=${OBJS_B}
endif

all:	$(NAME)

$(NAME):	${ALL_OBJS}
		ar -r ${NAME} ${ALL_OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	rm -f ${OBJS} ${OBJS_B}

fclean: clean
	rm -f ${NAME}

re: fclean all

bonus:
	make bonus_flag=1
.PHONY: all clean fclean re
